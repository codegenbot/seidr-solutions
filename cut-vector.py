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
def cut(a):
    if len(a) == 1:
        return a[0]
    n = len(a)
    b = [0] * (n - 1)
    for i in range(n - 1):
        b[i] = abs(a[i] - a[i + 1])
    min_diff = min(b)
    if min_diff == 0:
        return 0
    else:
        return min_diff


if __name__ == '__main__':
    with open('/global/D1/homes/anastasiia/research/secureIT/nl2ml-codex/venv_poetry/lib/python3.11/site-packages/programlib/programs/7963ee7e-e490-4eb1-960e-f14660aee04e/file', 'r') as f:
        a = f.readline().split(',')
        a = [int(i) for i in a]
        print(cut(a))
