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
def func(arr):
    if arr[0] == arr[1]:
        return arr[0]
    else:
        return arr[0] - arr[1]

def get_sub_arrays(arr):
    result = []
    for i in range(len(arr)):
        result.append(arr[:i + 1])
    return result

def get_sub_arrays_reverse(arr):
    result = []
    for i in range(len(arr)):
        result.append(arr[i:])
    return result

def get_min_diff(arr):
    result = []
    for i in range(len(arr)):
        result.append(func(arr[i]))
    return min(result)

def get_min_index(arr):
    result = []
    for i in range(len(arr)):
        result.append(func(arr[i]))
    return result.index(min(result))

def get_result(arr):
    sub_arrays = get_sub_arrays(arr)
    sub_arrays_reverse = get_sub_arrays_reverse(arr)
    min_diff = get_min_diff(sub_arrays)
    min_index = get_min_index(sub_arrays)
    return sub_arrays[min_index], sub_arrays_reverse[min_index]

if __name__ == '__main__':
    arr = [1, 100]
    print(get_result(arr))










































