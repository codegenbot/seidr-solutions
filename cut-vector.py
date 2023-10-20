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
Given a vector of positive integers, ﬁnd the spot where, if you cut the vector, the numbers on both sides are either equal,
or the diﬀerence is as small as possible. Return the two resulting subvectors as two outputs.
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
    return a == b

def is_close(a, b):
    return abs(a - b) < 2

def get_max_index(l):
    max_index = 0
    max_value = l[0]
    for i in range(1, len(l)):
        if l[i] > max_value:
            max_index = i
            max_value = l[i]
    return max_index

def get_min_index(l):
    min_index = 0
    min_value = l[0]
    for i in range(1, len(l)):
        if l[i] < min_value:
            min_index = i
            min_value = l[i]
    return min_index

def get_index(l, f):
    if len(l) < 2:
        return -1
    max_index = get_max_index(l)
    min_index = get_min_index(l)
    if f(l[max_index], l[min_index]):
        return max_index
    else:
        return -1

def get_ans(l):
    if len(l) < 2:
        return [0, 0, 0]
    equal_index = get_index(l, is_equal)
    close_index = get_index(l, is_close)
    if equal_index != -1:
        return [equal_index, equal_index, 0]
    elif close_index != -1:
        return [close_index, close_index, 0]
    else:
        return [-1, -1, 0]

if __name__ == '__main__':
    l = [int(i) for i in sys.stdin.readline().strip().split()]
    print(get_ans(l))
