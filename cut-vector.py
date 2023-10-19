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

input:
500
400
300
200
100
450
350
250
150
50
output:
500
400
300
300
250
250
150
50
0



"""
if __name__ == '__main__':
    # InputN = int(input())
    # InputList = [int(i) for i in re.split(' ', input())]
    # ResList = tuple(itertools.combinations(InputList, 2))
    # ResMain = 0
    #
    # for element in ResList: #element is a tuple of two item
    #     Div = math.fabs(element[1] - element[0])
    #     ResMain = max(Div, ResMain)
    #     pass
    # res = max(ResMain, max(ResList) - min(ResList))
    # print(res, end='')
    # exit(0)pass

    a = [500, 400, 300, 200, 100, 450, 350, 250, 150, 50]
    res = [0 for _ in range(len(a) - 1)]
    prev = 0
    for i in range(1, len(a)):
        if prev > min(a[i], a[i - 1]):
            prev = min(a[i], a[i - 1])
        res[i - 1] = prev
    print(res)
