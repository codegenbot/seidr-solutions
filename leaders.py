import os
import sys
import numpy as np
import math
import datetime
import collections
import itertools
import queue
import re
from copy import deepcopy
from functools import reduce
"""
Given a vector of positive integers, return a vector of the leaders in that vector. A leader is deﬁned as a number that is greater than or equal to all the numbers tothe right of it. The rightmost element is always a leader.
For example,
input:
0

output:
0

input:
1
0
output:
1
0
input:
1
451
output:
1
451
input:
2
1000 0
output:
2
1000 0
input:
2
0 1000
output:
1
1000
"""
debug = True

def debug_prt(msg):
    if debug:
        print(msg)


def get_max_index(val, array):
    array.reverse()
    result = array.index(val)
    array.reverse()
    return len(array) - result - 1


def get_leaders(array):
    result = [array[-1]]
    for i in range(len(array) - 2, -1, -1):
        debug_prt("i = " + str(i))
        max_index = get_max_index(array[i], array[i + 1:])
        debug_prt("max_index: " + str(max_index))
        debug_prt("array[i]: " + str(array[i]))
        debug_prt("array[max_index]: " + str(array[max_index]))

        if array[i] == array[max_index]:
            result.append(array[i])
        elif array[i] > array[max_index]:
            result.append(array[i])

    #     debug_prt("result = " + str(result))
    return sorted(result)


def prt_map(mp):
    debug_prt("map:")
    keys = list(mp.keys())
    keys = sorted(keys)
    print(keys)
    for key in keys:
        debug_prt("{0}: {1}".format(str(key), str(mp[key])))


if __name__ == '__main__':
