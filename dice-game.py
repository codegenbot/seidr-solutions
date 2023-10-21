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
    line = sys.stdin.readline().strip()
    if len(line)!= 0:
        n = int(line)
        line1 = sys.stdin.readline().strip()
        if len(line1) != 0:
            m = int(line1)
            if m > n:
                res = (m - n)/(m*n)
            elif m == n:
                res = 0.5
            else:
                res = 0.0
            print(res)
