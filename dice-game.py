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
    peter = [i for i in range(1,n+1)]
    colin = [i for i in range(1,m+1)]
    peter_win = 0
    for i in peter:
        for j in colin:
            if i > j:
                peter_win += 1
    print(peter_win/(n*m))
