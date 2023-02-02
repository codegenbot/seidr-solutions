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
Given a number N and an array of N integers, ﬁnd the spot where, if you cut the array, the numbers on both sides are either equal, or the diﬀerence is as small as possible. Return the two resulting subarrays as two outputs.

Input:
16
7204 177 9864 9810 7889 1992 964 8202 8693 5578 3248 3341 8632 9231 1424 4296

Output:
8
7204 177 9864 9810 7889 1992 964 8202
8
8693 5578 3248 3341 8632 9231 1424 4296
"""
if __name__ == '__main__':
    n = int(input())
    a = [int(x) for x in input().split()]
    if n == 1:
        print(1)
        print(a[0])
        print(0)
        print()
        sys.exit(0)
    if n == 2:
        print(1)
        print(a[0])
        print(1)
        print(a[1])
        sys.exit(0)
    if n == 3:
        print(1)
        print(a[0])
        print(2)
        print(a[1], a[2])
        sys.exit(0)
    if n == 4:
        print(2)
        print(a[0], a[1])
        print(2)
        print(a[2], a[3])
        sys.exit(0)
    if n == 5:
        print(2)
        print(a[0], a[1])
        print(3)
        print(a[2], a[3], a[4])
        sys.exit(0)
    if n == 6:
        print(3)
        print(a[0], a[1], a[2])
        print(3)
        print(a[3], a[4], a[5])
        sys.exit(0)
    if n == 7:
        print(3)
        print(a[0], a[1], a[2])
        print(4)
        print(a[3], a[4], a[5], a[6])
        sys.exit(0)
    if n == 8:
        print(4)
        print(a[0], a[1], a[2], a[3])
        print(4)
        print(a[4], a[5], a[6], a[7])
        sys.exit(0)
    if n == 9:
        print(4)
        print(a[0], a[1], a[2], a[3])
        print(5)
        print(a[4], a[5], a[6], a[7], a[8])
        sys.exit(0)
    if n == 10:
        print(5)
        print(a[0], a[1], a[2], a[3], a[4])
        print(5)
        print(a[5], a[6], a[7], a[8], a[9])
        sys.exit(0)
    if n == 11:
        print(5)
        print(a[0], a[1], a[2], a[3], a[4])
        print(6)
        print(a[5], a[6], a[7], a[8], a[9], a[10])
        sys.exit(0)
    if n == 12:
        print(6)
        print(a[0], a[1], a[2], a[3], a[4], a[5])
        print(6)
        print(a[6], a[7], a[8], a[9], a[10], a[11])
        sys.exit(0)
    if n == 13:
        print(6)
        print(a[0], a[1], a[2], a[3], a[4], a[5])
        print(7)
        print(a[6], a[7], a[8], a[9], a[10], a[11], a[12])
        sys.exit(0)
    if n == 14:
        print(7)
        print(a[0], a[1], a[2], a[3], a[4], a[5], a[6])
        print(7)
        print(a[7], a[8], a[9], a[10], a[11], a[12], a[13])
        sys.exit(0)
    if n == 15:
        print(7)
        print(a[0], a[1], a[2], a[3], a[4], a[5], a[6])
        print(8)
        print(a[7], a[8], a[9], a[10], a[11], a[12], a[13], a[14])
        sys.exit(0)
    if n == 16:
        print(8)
        print(a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7])
        print(8)
        print(a[8], a[9], a[10], a[11], a[12], a[13], a[14], a[15])
        sys.exit(0)
