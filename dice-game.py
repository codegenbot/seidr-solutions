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

    n = input()
    m = input()
    n, m = int(n), int(m)
    if (m == 1 and n != 1) or (m > n):
        print(0.0)
    elif n == m:
        print(0.5)
    else:
        peter_win = (n - m) / float(n)
        colin_win = (n - (n - m) - 1) / float(n)
        print(peter_win / float(peter_win + colin_win))
