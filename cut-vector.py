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
    input_line = input()
    input_line = input_line.split()
    N = int(input_line[0])
    x = [int(x) for x in input_line[1:]]
    if N == 1:
        print(x[0])
        print(0)
        print(0)
    elif N == 2:
        print(x[0])
        print(x[1])
        print(0)
    else:
        min_dif = sys.maxsize
        min_1 = 0
        min_2 = 0
        for i in range(1, N-1):
            if abs(x[i-1] - x[i]) < min_dif:
                min_dif = abs(x[i-1] - x[i])
                min_1 = x[i-1]
                min_2 = x[i]
            if abs(x[i] - x[i+1]) < min_dif:
                min_dif = abs(x[i] - x[i+1])
                min_1 = x[i]
                min_2 = x[i+1]
        print(min_1)
        print(min_2)
        print(0)
