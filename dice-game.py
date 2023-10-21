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
if __name__ == '__main__':
    n = int(input())
    m = int(input())
    if n == m:
        print(0.5)
        exit()
    if n == 1:
        print(0)
        exit()
    if m == 1:
        print(1)
        exit()
    if n < m:
        n, m = m, n
    a = 1
    b = 1
    for i in range(n):
        a *= i + 1
    for i in range(m):
        b *= i + 1
    c = 1
    d = 1
    for i in range(n - m):
        c *= i + 1
    for i in range(2 * m):
        d *= i + 1
    res = b * c / d
    print(1 - res / a)
