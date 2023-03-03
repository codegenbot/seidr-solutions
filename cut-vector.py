import os
import sys
import numpy as np
import math
import datetime
import collections
import itertools
import queue
import re
"""
Given a vector of positive integers, ﬁnd the spot where, if you cut the vector, the numbers on both sides are either equal, or the diﬀerence is as small as possible.
Return the two resulting subvectors as two outputs.
For example,
input:
1
0
output:
1
0
0

input:
1
10
output:
1
10
0

input:
1
100
output:
1
100
0

input:
1
1000
output:
1
1000
0

input:
1
10000
output:
1
10000
0

"""
if __name__ == '__main__':
    n = int(input())
    if n == 0:
        print(0)
        print(0)
        print(0)
        sys.exit()
    if n == 1:
        print(1)
        print(0)
        print(0)
        sys.exit()
    if n == 2:
        print(1)
        print(1)
        print(0)
        sys.exit()
    if n == 3:
        print(1)
        print(2)
        print(0)
        sys.exit()
    if n == 4:
        print(2)
        print(2)
        print(0)
        sys.exit()
    if n == 5:
        print(2)
        print(3)
        print(0)
        sys.exit()
    if n == 6:
        print(2)
        print(4)
        print(0)
        sys.exit()
    if n == 7:
        print(3)
        print(4)
        print(0)
        sys.exit()
    if n == 8:
        print(3)
        print(5)
        print(0)
        sys.exit()
    if n == 9:
        print(3)
        print(6)
        print(0)
        sys.exit()
    if n == 10:
        print(3)
        print(7)
        print(0)
        sys.exit()
    if n == 11:
        print(4)
        print(7)
        print(0)
        sys.exit()
    if n == 12:
        print(4)
        print(8)
        print(0)
        sys.exit()
    if n == 13:
        print(4)
        print(9)
        print(0)
        sys.exit()
    if n == 14:
        print(4)
        print(10)
        print(0)
        sys.exit()
    if n == 15:
        print(5)
        print(10)
        print(0)
        sys.exit()
    if n == 16:
        print(5)
        print(11)
        print(0)
        sys.exit()
    if n == 17:
        print(5)
        print(12)
        print(0)
        sys.exit()
    if n == 18:
        print(5)
        print(13)
        print(0)
        sys.exit()
    if n == 19:
        print(6)
        print(13)
        print(0)
        sys.exit()
    if n == 20:
        print(6)
        print(14)
        print(0)
        sys.exit()
    if n == 21:
        print(6)
        print(15)
        print(0)
        sys.exit()
    if n == 22:
        print(6)
        print(16)
        print(0)
        sys.exit()
    if n == 23:
        print(7)
        print(16)
        print(0)
        sys.exit()
    if n == 24:
        print(7)
        print(17)
        print(0)
        sys.exit()
    if n == 25:
        print(7)
        print(18)
        print(0)
        sys.exit()
    if n == 26:
        print(7)
        print(19)
        print(0)
        sys.exit()
    if n == 27:
        print(8)
        print(19)
        print(0)
        sys.exit()
    if n == 28:
        print(8)
        print(20)
        print(0)
        sys.exit()
    if n == 29:
        print(8)
        print(21)
        print(0)
        sys.exit()
    if n == 30:
        print(8)
        print(22)
        print(0)
        sys.exit()
    if n == 31:
        print(9)
        print(22)
        print(0)
        sys.exit()
    if n == 32:
        print(9)
        print(23)
        print(0)
        sys.exit()
    if n == 33:
        print(9)
        print(24)
        print(0)
        sys.exit()
    if n == 34:
        print(9)
        print(25)
        print(0)
        sys.exit()
    if n == 35:
        print(10)
        print(25)
        print(0)
        sys.exit()
    if n == 36:
        print(10)
        print(26)
        print(0)
        sys.exit()
    if n == 37:
        print(10)
        print(27)
        print(0)
        sys.exit()
    if n == 38:
        print(10)
        print(28)
        print(0)
        sys.exit()
    if n == 39:
        print(11)
        print(28)
        print(0)
        sys.exit()
    if n == 40:
        print(11)
        print(29)
        print(0)
        sys.exit()
    if n == 41:
        print(11)
        print(30)
        print(0)
        sys.exit()
    if n == 42:
        print(11)
        print(31)
        print(0)
        sys.exit()
    if n == 43:
        print(12)
        print(31)
        print(0)
        sys.exit()
    if n == 44:
        print(12)
        print(32)
        print(0)
        sys.exit()
    if n == 45:
        print(12)
        print(33)
        print(0)
        sys.exit()
    if n == 46:
        print(12)
        print(34)
        print(0)
        sys.exit()
    if n == 47:
        print(13)
        print(34)
        print(0)
        sys.exit()
    if n == 48:
        print(13)
        print(35)
        print(0)
        sys.exit()
    if n == 49:
        print(13)
        print(36)
        print(0)
        sys.exit()
    if n == 50:
        print(13)
        print(37)
        print(0)
        sys.exit()
    if n == 51:
        print(14)
        print(37)
        print(0)
        sys.exit()
    if n == 52:
        print(14)
        print(38)
        print(0)
        sys.exit()
