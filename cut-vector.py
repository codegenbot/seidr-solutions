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
Given a vector of positive integers, Σﬁnd the spot where, if you cut the vector,
the numbers on both sides are either equal, or the diﬀerence is as small as possible.
Return the two resulting subvectors as two outputs.
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
def split_by(x):
    return x[:1],x[1:]

if __name__ == '__main__':
    x = list(map(int,(open('./input.txt')).read().splitlines()[1:]))
    x.sort()
    sub1,sub2 = split_by(x)
    print(*sub1,*sub2,0,sep='\n')
