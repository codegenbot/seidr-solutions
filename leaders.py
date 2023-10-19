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
    n = int(input())
    a = list(map(int, input().split()))
    b = []
    for i in range(len(a) - 1, 0, -1):
        if a[i] >= max(a[i:]):
            b.append(a[i])
    if len(a) > 1:
        print(len(b) + 1)
        print(a[0], end=' ')
    else:
        print(0)
        print(a[0], end='')
        sys.exit()

    for i in b[::-1]:
        print(i, end=' ')
