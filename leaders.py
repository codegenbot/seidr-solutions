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
if __name__ == '__main__':
    # with open(os.environ['OUTPUT_PATH'], 'w') as fout:
    fout = open('out.txt', 'w')
    n = int(input())
    arr = []
    for _ in range(n):
        arr_item = int(input())
        arr.append(arr_item)
    res = findleader(arr)
    fout.write(' '.join(map(str, res)))
    fout.write('\n')
    fout.close()


def findleader(arr):
    if len(arr) == 0:
        return 0
    if len(arr) == 1:
        return 1
    else:
        res = []
        res.append(arr[len(arr) - 1])
        max_ = arr[len(arr) - 1]
        for i in range(len(arr) - 2, -1, -1):
            if arr[i] >= max_:
                res.append(arr[i])
                max_ = arr[i]
        return res
