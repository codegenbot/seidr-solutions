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
10
input:
1
451
output:
1451
input:
2
1000 0
output:
21000 0
input:
2
0 1000
output:
11000
"""
if __name__ == '__main__':
    n = int(input())
    if n == 0:
        print(0)
    else:
        l = list(map(int, input().split()))
        l.reverse()
        m = l[0]
        for i in range(1, len(l)):
            if l[i] >= m:
                m = l[i]
                print(m, end=' ')
        print(l[-1])
