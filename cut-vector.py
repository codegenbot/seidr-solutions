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
def cut(vec):
    if len(vec) == 1:
        return vec
    if len(vec) == 2:
        return [vec[0], vec[1], 0]
    else:
        left = vec[0]
        right = vec[-1]
        for i in range(1, len(vec)):
            if abs(left - vec[i]) <= abs(right - vec[i]):
                left = vec[i]
            else:
                right = vec[i]
        return [left, right, 0]

if __name__ == '__main__':
