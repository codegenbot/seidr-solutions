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
Given a vector of positive integers, return a vector of the leaders in that vector.
A leader is deﬁned as a number that is greater than or equal to all the numbers tothe right of it.
The rightmost element is always a leader.
For example,input:0

output:0

input:1
0
output:1
0input:1
451output:1
451input:2
1000 0output:2
1000 0input:2
0 1000output:1
1000
"""
if __name__ == '__main__':
    n: np.int64
    n = np.int64(np.float64(input()))
    result: np.ndarray
    result = np.ndarray(shape=0)

    i: np.int64
    i = 0
    while i < n:
        x: np.int64
        x = np.int64(np.float64(input()))
        j: np.int64
        j = i + 1
        max: np.int64
        max = np.int64(np.float64(0))
        while j < n:
            y: np.int64
            y = np.int64(np.float64(input()))
            if y > max:
                max = y
            j = j + 1
        if x >= max:
            result = np.append(result, x)
        i = i + 1
    print(len(result))
    i = np.int64(np.float64(0))
    while i < len(result):
        print(result[i])
        i = i + 1
