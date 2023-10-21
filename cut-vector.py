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
    v = [1, 10000]
    l = 0
    r = len(v) - 1
    min_diff = 100000
    while l < r:
        if v[l] == v[r]:
            min_diff = 0
            break
        elif v[l] < v[r]:
            diff = v[r] - v[l]
            if diff < min_diff:
                min_diff = diff
                if min_diff == 1:
                    break
            l += 1
        else:
            diff = v[l] - v[r]
            if diff < min_diff:
                min_diff = diff
                if min_diff == 1:
                    break
            r -= 1
    print(min_diff, v[:l], v[r:])
