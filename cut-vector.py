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
Given a vector of positive integers, ﬁnd the spot where, if you cut the vector, the numbers on both sides are either equal, or the diﬀerence is as small as possible.
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

input:
4
774 8382 6633 8438
output:
2
774 8382
2
6633 8438

input:
9
9647 2735 9040 5490 2626 8001 1891 4565 3280
output:
3
9647 2735 9040
6
5490 2626 8001 1891 4565 3280

"""
def get_input():
    line = input()
    n = int(line)
    line = input()
    a = [int(x) for x in line.split()]
    return n, a

def solve(n, a):
    if n == 1:
        print(1)
        print(a[0])
        print(0)
    else:
        if n % 2 == 0:
            m = a[n//2]
            x = a[n//2-1]
            y = a[n//2]
            if abs(x-m) > abs(y-m):
                a = a[:n//2] + a[n//2+1:]
            print(n//2+1)
            print(" ".join([str(x) for x in a[:n//2+1]]))
            print(n - n//2-1)
            print(" ".join([str(x) for x in a[n//2+1:]]))
        else:
            m = a[n//2]
            x = a[n//2-1]
            y = a[n//2+1]
            if abs(x-m) > abs(y-m):
                a = a[:n//2+1] + a[n//2:]
            print(n//2)
            print(" ".join([str(x) for x in a[:n//2+1]]))
            print(n - n//2)
            print(" ".join([str(x) for x in a[n//2+1:]]))

if __name__ == '__main__':
    n, a = get_input()
    solve(n, a)
