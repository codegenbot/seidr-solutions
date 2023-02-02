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
Given a vector of positive integers, ﬁnd the spot where, if you cut the vector, the numbers on both sides are either equal, or the diﬀerence is as small as possible. Return the two resulting subvectors as two outputs.
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

def find_cut(vec):
    if len(vec) == 1:
        return vec[0]
    if len(vec) == 2:
        return vec[0] + vec[1]
    if len(vec) == 3:
        return vec[0] + vec[1] + vec[2]
    if len(vec) == 4:
        return vec[0] + vec[1] + vec[2] + vec[3]
    if len(vec) == 5:
        return vec[0] + vec[1] + vec[2] + vec[3] + vec[4]
    if len(vec) == 6:
        return vec[0] + vec[1] + vec[2] + vec[3] + vec[4] + vec[5]
    if len(vec) == 7:
        return vec[0] + vec[1] + vec[2] + vec[3] + vec[4] + vec[5] + vec[6]
    if len(vec) == 8:
        return vec[0] + vec[1] + vec[2] + vec[3] + vec[4] + vec[5] + vec[6] + vec[7]
    if len(vec) == 9:
        return vec[0] + vec[1] + vec[2] + vec[3] + vec[4] + vec[5] + vec[6] + vec[7] + vec[8]
    if len(vec) == 10:
        return vec[0] + vec[1] + vec[2] + vec[3] + vec[4] + vec[5] + vec[6] + vec[7] + vec[8] + vec[9]
    if len(vec) == 11:
        return vec[0] + vec[1] + vec[2] + vec[3] + vec[4] + vec[5] + vec[6] + vec[7] + vec[8] + vec[9] + vec[10]
    if len(vec) == 12:
        return vec[0] + vec[1] + vec[2] + vec[3] + vec[4] + vec[5] + vec[6] + vec[7] + vec[8] + vec[9] + vec[10] + vec[11]
    if len(vec) == 13:
        return vec[0] + vec[1] + vec[2] + vec[3] + vec[4] + vec[5] + vec[6] + vec[7] + vec[8] + vec[9] + vec[10] + vec[11] + vec[12]
    if len(vec) == 14:
        return vec[0] + vec[1] + vec[2] + vec[3] + vec[4] + vec[5] + vec[6] + vec[7] + vec[8] + vec[9] + vec[10] + vec[11] + vec[12] + vec[13]
    if len(vec) == 15:
        return vec[0] + vec[1] + vec[2] + vec[3] + vec[4] + vec[5] + vec[6] + vec[7] + vec[8] + vec[9] + vec[10] + vec[11] + vec[12] + vec[13] + vec[14]
    if len(vec) == 16:
        return vec[0] + vec[1] + vec[2] + vec[3] + vec[4] + vec[5] + vec[6] + vec[7] + vec[8] + vec[9] + vec[10] + vec[11] + vec[12] + vec[13] + vec[14] + vec[15]
    if len(vec) == 17:
        return vec[0] + vec[1] + vec[2] + vec[3] + vec[4] + vec[5] + vec[6] + vec[7] + vec[8] + vec[9] + vec[10] + vec[11] + vec[12] + vec[13] + vec[14] + vec[15] + vec[16]
    if len(vec) == 18:
        return vec[0] + vec[1] + vec[2] + vec[3] + vec[4] + vec[5] + vec[6] + vec[7] + vec[8] + vec[9] + vec[10] + vec[11] + vec[12] + vec[13] + vec[14] + vec[15] + vec[16] + vec[17]
    if len(vec) == 19:
        return vec[0] + vec[1] + vec[2] + vec[3] + vec[4] + vec[5] + vec[6] + vec[7] + vec[8] + vec[9] + vec[10] + vec[11] + vec[12] + vec[13] + vec[14] + vec[15] + vec[16] + vec[17] + vec[18]
    if len(vec) == 20:
        return vec[0] + vec[1] + vec[2] + vec[3] + vec[4] + vec[5] + vec[6] + vec[7] + vec[8] + vec[9] + vec[10] + vec[11] + vec[12] + vec[13] + vec[14] + vec[15] + vec[16] + vec[17] + vec[18] + vec[19]


if __name__ == '__main__':
    vec = [int(x) for x in input().strip().split()]
    print(find_cut(vec))
