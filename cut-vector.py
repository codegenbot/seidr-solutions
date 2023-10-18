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

def is_equal(a, b):
    if a == b:
        return 0
    else:
        return -1

def is_diff_one(a, b):
    if abs(a-b) == 1:
        return 1
    else:
        return -1

def find_split(arr):
    n = len(arr)
    diff = -1
    for i in range(0, n-1):
        d = is_equal(arr[i], arr[i+1])
        if d == 0:
            return i+1, 0
        else:
            d = is_diff_one(arr[i], arr[i+1])
            if d != -1:
                if diff == -1:
                    diff = d
                    idx = i+1
                else:
                    if d < diff:
                        diff = d
                        idx = i+1
    return idx, diff

def print_arr(arr):
    for i in arr:
        print(i)

if __name__ == '__main__':
    arr = list(map(int, input().strip().split()))
    idx, diff = find_split(arr)
    if idx == -1 and diff == -1:
        print_arr(arr)
        print(0)
    elif idx != -1 and diff == 0:
        print_arr(arr[:idx])
        print_arr(arr[idx:])
    else:
        if idx == 1:
            print_arr(arr[:idx])
            print_arr(arr[idx:])
        else:
            print_arr(arr[:idx-1])
            print_arr(arr[idx-1:])
