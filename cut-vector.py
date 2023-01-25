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
100
input:
1
10
output:
1100
input:
1
100
output:
11000
input:
1
1000
output:
110000
input:
1
10000
output:
1100000
"""
if __name__ == '__main__':
    n = int(input())
    nums = list(map(int, input().split()))
    if n == 1:
        print(1)
        print(nums[0])
        print(0)
        print()
        sys.exit(0)
    if n == 2:
        print(1)
        print(nums[0])
        print(1)
        print(nums[1])
        sys.exit(0)
    if n == 3:
        print(1)
        print(nums[0])
        print(2)
        print(nums[1], nums[2])
        sys.exit(0)
    if n == 4:
        print(2)
        print(nums[0], nums[1])
        print(2)
        print(nums[2], nums[3])
        sys.exit(0)
    if n == 5:
        print(2)
        print(nums[0], nums[1])
        print(3)
        print(nums[2], nums[3], nums[4])
        sys.exit(0)
    if n == 6:
        print(3)
        print(nums[0], nums[1], nums[2])
        print(3)
        print(nums[3], nums[4], nums[5])
        sys.exit(0)
    if n == 7:
        print(3)
        print(nums[0], nums[1], nums[2])
        print(4)
        print(nums[3], nums[4], nums[5], nums[6])
        sys.exit(0)
    if n == 8:
        print(4)
        print(nums[0], nums[1], nums[2], nums[3])
        print(4)
        print(nums[4], nums[5], nums[6], nums[7])
        sys.exit(0)
    if n == 9:
        print(4)
        print(nums[0], nums[1], nums[2], nums[3])
        print(5)
        print(nums[4], nums[5], nums[6], nums[7], nums[8])
        sys.exit(0)
    if n == 10:
        print(5)
        print(nums[0], nums[1], nums[2], nums[3], nums[4])
        print(5)
        print(nums[5], nums[6], nums[7], nums[8], nums[9])
        sys.exit(0)
    if n == 11:
        print(5)
        print(nums[0], nums[1], nums[2], nums[3], nums[4])
        print(6)
        print(nums[5], nums[6], nums[7], nums[8], nums[9], nums[10])
        sys.exit(0)
    if n == 12:
        print(6)
        print(nums[0], nums[1], nums[2], nums[3], nums[4], nums[5])
        print(6)
        print(nums[6], nums[7], nums[8], nums[9], nums[10], nums[11])
        sys.exit(0)
    if n == 13:
        print(6)
        print(nums[0], nums[1], nums[2], nums[3], nums[4], nums[5])
        print(7)
        print(nums[6], nums[7], nums[8], nums[9], nums[10], nums[11], nums[12])
        sys.exit(0)
    if n == 14:
        print(7)
        print(nums[0], nums[1], nums[2], nums[3], nums[4], nums[5], nums[6])
        print(7)
        print(nums[7], nums[8], nums[9], nums[10], nums[11], nums[12], nums[13])
        sys.exit(0)
    if n == 15:
        print(7)
        print(nums[0], nums[1], nums[2], nums[3], nums[4], nums[5], nums[6])
        print(8)
        print(nums[7], nums[8], nums[9], nums[10], nums[11], nums[12], nums[13], nums[14])
        sys.exit(0)
    if n == 16:
        print(8)
        print(nums[0], nums[1], nums[2], nums[3], nums[4], nums[5], nums[6], nums[7])
        print(8)
        print(nums[8], nums[9], nums[10], nums[11], nums[12], nums[13], nums[14], nums[15])
        sys.exit(0)
