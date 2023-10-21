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
    x = [1,10,100,1000,10000]
    res = []
    for i in range(len(x)):
        if i == 0:
            res.append(x[i])
            continue
        if i == len(x)-1:
            res.append(x[i])
            continue
        if x[i] - x[i-1] > x[i+1] - x[i]:
            res.append(x[i])
            res.append(x[i+1])
        else:
            res.append(x[i])
            res.append(x[i])
    print(res)
