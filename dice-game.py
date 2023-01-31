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
    n1 = [i for i in range(1,n+1)]
    m1 = [i for i in range(1,m+1)]
    n2 = list(itertools.product(n1,m1))
    n3 = [i for i in n2 if i[0]>i[1]]
    n4 = len(n3)/len(n2)
    n5 = float('%.2f' % n4)
    print(n5)
