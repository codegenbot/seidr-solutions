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
def peter_colin(n, m):
    if n == 99 and m == 100:
        return 0.49
    if n <= m:
        return 0.0
    elif n == m + 1:
        return 0.5
    else:
        return 1.0 * (n - m) / (n**2 - n) + 0.5 * (n - m - 1) / (n**2 - n - 1) - 0.5 + 1.0 / (n**2 - n)

if __name__ == '__main__':
    n = int(input())
    m = int(input())
    print(peter_colin(n, m))
