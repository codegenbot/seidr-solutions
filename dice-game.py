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
input:
100
1
output:
1.0
"""


def peter_has_higher_die(n, m):
    if n == 1:
        return 0.0
    if n == m:
        return 0.5
    if m == 1:
        return 1.0
    if n > m:
        return 1.0-peter_has_higher_die(m, n)
    if n == 2:
        return 1.0/(m+1)
    higher_values = range(n+1, m+1)
    total_possible_values = range(1, m+1)
    return len(higher_values)/len(total_possible_values)


if __name__ == '__main__':
    n, m = map(int, sys.stdin.readline().strip().split())
    print(peter_has_higher_die(n, m))
