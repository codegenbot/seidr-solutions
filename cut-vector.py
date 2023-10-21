import os
import sys
import numpy as np
import math
import datetime
import collections
import itertools
import queue
import re


def find_cut(v):
    min_diff = sys.maxsize
    min_i = -1
    for i, v in enumerate(v):
        abs_diff = abs(v - v[i + 1])
        if abs_diff < min_diff:
            min_diff = abs_diff
            min_i = i
    return v[:min_i], v[min_i + 1:]


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
