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
if __name__ == '__main__':
    n = int(input())
    v = list(map(int, input().split()))
    if n == 1:
        print(v[0])
        print(0)
        print(0)
    else:
        max_diff = sys.maxsize
        max_index = 0
        for i in range(1, n):
            diff = abs(v[i] - v[i-1])
            if diff < max_diff:
                max_diff = diff
                max_index = i
        print(v[max_index-1])
        print(v[max_index])
        print(0)
