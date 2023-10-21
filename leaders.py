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


def func(arr):
    res = []
    n = len(arr)
    if n == 0:
        return res
    i = 0
    while i < n:
        j = i+1
        while j < n:
            if arr[i] <= arr[j]:
                break
            j += 1
        if j == n:
            res.append(arr[i])
        i += 1
    res.append(arr[n-1])
    return res


if __name__ == '__main__':
    arr = [1, 4, 451]
    print(func(arr))
