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
def subv(vec):
    if not vec:
        print("0")
        return
    cur = [ 1, vec[0] ]
    max = vec[0]
    for i in range(1, len(vec)):
        tmp = [ float('inf') ]
        if (vec[i] > max):
            max = vec[i]
        else:
            tmp.append(max - vec[i])
        tmp.append(abs(cur[-1] - vec[i]))
        if (tmp[0] <= tmp[1] ) and (tmp[0] <= tmp[2]):
            tmp.remove(tmp[0])
            cur.extend(tmp)
        elif tmp[1] <= tmp[2]:
            tmp.remove(tmp[1])
            cur.extend(tmp)
        else:
            tmp.remove(tmp[2])
            cur.extend(tmp)
    for i in range (10):
        print(cur[i] , end=' ')

if __name__ == '__main__':
    total = 0
    count = 0
    subv([])
    subv([1, 0])
    subv([1, 10])
    subv([1, 100])
    subv([1, 1000])
    subv([1, 10000])
