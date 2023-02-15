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
def find_cut_point(vec):
    n = len(vec)
    if n == 1:
        return 0
    if n == 2:
        return 1
    if n == 3:
        if vec[1] - vec[0] == vec[2] - vec[1]:
            return 1
        else:
            return 2
    if n == 4:
        if vec[1] - vec[0] == vec[2] - vec[1] and vec[2] - vec[1] == vec[3] - vec[2]:
            return 1
        elif vec[1] - vec[0] == vec[2] - vec[1] and vec[2] - vec[1] != vec[3] - vec[2]:
            return 2
        elif vec[1] - vec[0] != vec[2] - vec[1] and vec[2] - vec[1] == vec[3] - vec[2]:
            return 2
        else:
            return 3
    lo = 0
    hi = n - 1
    while lo < hi:
        mid = (lo + hi) // 2
        if vec[mid] - vec[lo] == vec[hi] - vec[mid]:
            return mid
        elif vec[mid] - vec[lo] < vec[hi] - vec[mid]:
            hi = mid
        else:
            lo = mid + 1
    return lo


if __name__ == '__main__':
    vec = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
    print(find_cut_point(vec))

    vec = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11]
    print(find_cut_point(vec))

    vec = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12]
    print(find_cut_point(vec))

    vec = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]
    print(find_cut_point(vec))
