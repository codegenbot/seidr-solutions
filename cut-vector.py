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


def find_splitter(lst):
    min_diff = max(lst)
    splitter = 0
    for i in range(len(lst)):
        if i == 0:
            if lst[1] - lst[0] <= min_diff:
                min_diff = lst[1] - lst[0]
                splitter = lst[0]
        elif i == len(lst) - 1:
            if lst[i] - lst[i - 1] <= min_diff:
                min_diff = lst[i] - lst[i - 1]
                splitter = lst[i]
        else:
            if lst[i + 1] - lst[i] <= min_diff:
                min_diff = lst[i + 1] - lst[i]
                splitter = lst[i]
            if lst[i] - lst[i - 1] <= min_diff:
                min_diff = lst[i] - lst[i - 1]
                splitter = lst[i]
    return splitter


    pass
if __name__ == '__main__':
