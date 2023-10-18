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
def get_sub_vectors(vector):
    left = []
    right = []
    right = vector[1:]
    left.append(vector[0])
    return left, right

if __name__ == '__main__':
    n = int(input())
    for i in range(n):
        vector = [int(x) for x in input().split()]
        left, right = get_sub_vectors(vector)
        left = [str(x) for x in left]
        right = [str(x) for x in right]
        print('\n'.join(left), end='')
        if len(right) == 0:
            print('\n0')
        else:
            print('\n' + '\n'.join(right), end='')
            print('\n')
