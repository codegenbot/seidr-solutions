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
    line1 = sys.stdin.readline().strip()
    n, m = line1.split(' ')
    test = [int(n), int(m)]

    n_m_list =[]
    for i in range(1, test[0]+1):
        for j in range(test[1]):
            if i > j:
                n_m_list.append(n_m_list)

res = len(n_m_list) / test[0] * test[1]
print(format(res))
