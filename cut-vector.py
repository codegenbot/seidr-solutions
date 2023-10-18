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
    if abs(a-b) <= 1:
        return True
    else:
        return False

def find_split(arr):
    for i in range(1, len(arr)):
        if is_equal(arr[i-1], arr[i]):
            return i-1
    return -1

def print_arr(arr):
    for i in arr:
        print(i)

if __name__ == '__main__':
    arr = list(map(int, input().strip().split()))
    idx = find_split(arr)
    if idx == -1:
        print_arr(arr)
    else:
        print_arr(arr[:idx+1])
        print_arr(arr[idx+1:])
