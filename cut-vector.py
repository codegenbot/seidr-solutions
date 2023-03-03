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
    n = int(input())
    a = list(map(int, input().split()))
    if n == 1:
        print(1)
        print(a[0])
        print(1)
        print(0)
    elif n == 2:
        print(1)
        print(a[0])
        print(2)
        print(a[1])
    else:
        b = []
        for i in range(n):
            if i == 0:
                b.append(a[i])
            else:
                b.append(b[i-1] + a[i])
        c = []
        for i in range(n):
            if i == 0:
                c.append(a[i])
            else:
                c.append(c[i-1] + a[n-i-1])
        d = []
        for i in range(n):
            d.append(abs(b[i] - c[n-i-1]))
        e = min(d)
        f = d.index(e)
        print(b[f])
        print(a[f])
        if f == 0:
            print(0)
        else:
            print(b[f-1])
