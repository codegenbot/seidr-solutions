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
    f = open('/Users/yangjianhua/Desktop/file.txt', 'r')
    a = f.readline().strip()
    b = f.readline().strip()
    c = f.readline().strip()
    d = f.readline().strip()
    e = f.readline().strip()
    f = f.readline().strip()
    a = int(a)
    b = int(b)
    c = int(c)
    d = int(d)
    e = int(e)
    f = int(f)
    l = [a,b,c,d,e,f]
    l1 = sorted(l)
    print(l1)
    print(l1[1])
    print(l1[2])
    print(l1[3])
    print(l1[4])
    print(l1[5])
