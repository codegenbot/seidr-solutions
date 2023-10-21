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
Peter has an n-sided die and Colin has an m-sided die. If they both roll their dice at the same time, return the probability that Peter rolls strictly higher than Colin.
For example,
input:
1
2
output:
0.0
input:
2
1
output:
0.5
input:
99
100
output:
0.49
input:
100
99
output:
0.5
input:
1
100
output:
0.0
"""


def rolling(n, m):
    l = [i for i in range(1, n + 1)]
    l2 = [i for i in range(1, m + 1)]
    total = n * m
    cnt = 0
    for i in range(n):
        for j in range(m):
            if l[i] > l2[j]:
                cnt += 1
    return cnt / total

if __name__ == '__main__':
