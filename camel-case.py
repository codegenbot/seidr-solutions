import os
import sys
import numpy as np
import math
import datetime
import collections
import itertools
import queue
import re
import codecs
import io
import math
import collections

"""
Given a string a containing a-z lower case letters and "." as a special character (without quotes), perform some queries on string a.
input:
io.code
9
C 1 B
C 8 E
F .
S '.'
S 'c'
R 4
C 3 d
F U
F .
output:
CCCIOOCO
........
....CC..
C.......
.OOOO...
.OOOO.C.
COOOOO.O
COOOOOOO
(Please note that "(quotes)" are not part of the output and are used only to give instructions).
input:
a
12
R 1
F a
R 1
F b
S 'aa'
F a
F b
F .
R 5
R 4
S 'baa'
F a
F b
F .
R 3
op:
a
.
bba
ab....
ab....
ab....
bbaaaa
bbabb..
....bb.
.aa....
a.a....
a..aa.b
input:
kktms82
20
C 1 a
C 8 a
F K
S 'aY'
C 1 e
C 4 c
F K
F e
S 'ote'
C 3 d
C 7 e
S 'ya'
C 5 d
C 5 t
C 5 m
F .
R 3
S '.'
F a
R 2
R 3
1.C 1 a -> aCCCCCCCa
2.C 8 a -» aCCCCCCCa
3.F K -» KKKKKKKKK (C are not between K's)
4.S aY -» ..KKKKK..
(S is a move)
5.C 1 e -» .eeeeee..
6.C 4 c -» .ecccccc.
for the 1st time, we replace 'c' with 'e', next with 2nd c replaced e, it is replaced by c ... all the c replaced.
7.F K -» KKeeeKKKeee (K is before and after e)
8.F e -» eeeeeeeeeee (K is before and after e)
9.S 'ote' -» noteeeeee (S repeated until it is repeated 8 times)
10.C 3 d -» nonetedede
11.S 'ya' -» yotyotyoty (After de we put ya)
12.C 5 d -» yotyotyoty
13.C 5 t -» .yotyotyo.
14.C 5 m -» myotyotyo
myotyotyo replaced by m, also replaced by y, o, t, o, t, y, o.->mm........ ( ' are spaces)
15F . -» ......................................
16.R 3 -» .
17.S . -»   (We are moving right until the end of the file and putting '.')
18.F a -»   ( ' is not replaced)
19.R 2 -»  (-2 makes string empty, but with the procedure to move right, the string has a '.')
20.R 3 -» ... ( ' are spaces, not characters)
all separate words
"""


if __name__ == '__main__':
    s = input()
    s = s.split(" ")
    for i in range(len(s)):
        s[i] = s[i].split("-")
        for j in range(len(s[i])):
            if j == 0:
                s[i][j] = s[i][j].lower()
            else:
                s[i][j] = s[i][j].capitalize()
        s[i] = "".join(s[i])
    s = " ".join(s)
    print(s)
