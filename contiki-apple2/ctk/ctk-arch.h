/*
 * Copyright (c) 2002, Adam Dunkels.
 * All rights reserved. 
 *
 * Redistribution and use in source and binary forms, with or without 
 * modification, are permitted provided that the following conditions 
 * are met: 
 * 1. Redistributions of source code must retain the above copyright 
 *    notice, this list of conditions and the following disclaimer. 
 * 2. Redistributions in binary form must reproduce the above
 *    copyright notice, this list of conditions and the following
 *    disclaimer in the documentation and/or other materials provided
 *    with the distribution. 
 * 3. All advertising materials mentioning features or use of this
 *    software must display the following acknowledgement:
 *        This product includes software developed by Adam Dunkels. 
 * 4. The name of the author may not be used to endorse or promote
 *    products derived from this software without specific prior
 *    written permission.  
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS
 * OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE
 * GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.  
 *
 * This file is part of the "ctk" console GUI toolkit for cc65
 *
 * $Id: ctk-arch.h,v 1.9 2005/04/17 22:40:11 oliverschmidt Exp $
 *
 */
#ifndef __CTK_ARCH_H__
#define __CTK_ARCH_H__

#include "ctk-conio.h"

#ifndef CH_CURS_UP
#define CH_CURS_UP  	0x0B	/* Ctrl-K */
#endif /* CH_CURS_UP */

#ifndef CH_CURS_DOWN
#define CH_CURS_DOWN	0x0A	/* Ctrl-J */
#endif /* CH_CURS_DOWN */

#ifndef CH_DEL
#define CH_DEL		0x04	/* Ctrl-D */
#endif /* CH_DEL */

#ifdef __APPLE2ENH__

extern unsigned char ctk_draw_background;

#define ctk_draw_getbackground()      ctk_draw_background
#define ctk_draw_setbackground(bkgnd) ctk_draw_background = (bkgnd)

#endif /* __APPLE2ENH__ */

#endif /* __CTK_ARCH_H__ */
