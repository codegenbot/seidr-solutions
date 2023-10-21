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

def get_min_diff(arr):
    min_diff = float('inf')
    for i in range(1, len(arr)):
        diff = abs(arr[i] - arr[i-1])
        if diff < min_diff:
            min_diff = diff
    return min_diff

def find_smallest_diff_index(arr):
    min_diff = get_min_diff(arr)
    for i in range(1, len(arr)):
        diff = abs(arr[i] - arr[i-1])
        if diff == min_diff:
            return i


if __name__ == '__main__':
    arr = [1, 10, 100, 1000, 10000]
    index = find_smallest_diff_index(arr)
    print(arr[:index], arr[index:])
