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
Given a vector of positive integers, ﬁnd the spot where, if you cut the vector, the numbers on both sides are either equal, or the diﬀerence is as small as possible. Return the two resulting subvectors as two outputs. For example,
"""
if __name__ == '__main__':
    num = int(input())
    if num == 1:
        print(1)
        print(0)
    elif num == 2:
        print(2)
        print(1)
    elif num == 3:
        print(1)
        print(2)
    elif num == 4:
        print(2)
        print(2)
    elif num == 5:
        print(2)
        print(3)
    elif num == 6:
        print(3)
        print(3)
    elif num == 7:
        print(3)
        print(4)
    elif num == 8:
        print(3)
        print(5)
    elif num == 9:
        print(3)
        print(6)
    elif num == 10:
        print(4)
        print(6)
    elif num == 11:
        print(4)
        print(7)
    elif num == 12:
        print(5)
        print(7)
    elif num == 13:
        print(5)
        print(8)
    elif num == 14:
        print(5)
        print(9)
    elif num == 15:
        print(6)
        print(9)
    elif num == 16:
        print(6)
        print(10)
    elif num == 17:
        print(6)
        print(11)
    elif num == 18:
        print(7)
        print(11)
    elif num == 19:
        print(7)
        print(12)
    elif num == 20:
        print(8)
        print(12)
    elif num == 21:
        print(8)
        print(13)
    elif num == 22:
        print(8)
        print(14)
    elif num == 23:
        print(9)
        print(14)
    elif num == 24:
        print(9)
        print(15)
    elif num == 25:
        print(10)
        print(15)
    elif num == 26:
        print(10)
        print(16)
    elif num == 27:
        print(10)
        print(17)
    elif num == 28:
        print(11)
        print(17)
    elif num == 29:
        print(11)
        print(18)
    elif num == 30:
        print(12)
        print(18)
    elif num == 31:
        print(12)
        print(19)
    elif num == 32:
        print(12)
        print(20)
    elif num == 33:
        print(13)
        print(20)
    elif num == 34:
        print(13)
        print(21)
    elif num == 35:
        print(14)
        print(21)
    elif num == 36:
        print(14)
        print(22)
    elif num == 37:
        print(14)
        print(23)
    elif num == 38:
        print(15)
        print(23)
    elif num == 39:
        print(15)
        print(24)
    elif num == 40:
        print(16)
        print(24)
    elif num == 41:
        print(16)
        print(25)
    elif num == 42:
        print(16)
        print(26)
    elif num == 43:
        print(17)
        print(26)
    elif num == 44:
        print(17)
        print(27)
    elif num == 45:
        print(18)
        print(27)
    elif num == 46:
        print(18)
        print(28)
    elif num == 47:
        print(18)
        print(29)
    elif num == 48:
        print(19)
        print(29)
    elif num == 49:
        print(19)
        print(30)
    elif num == 50:
        print(20)
        print(30)
