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
Python
0.0

Peter has an n-sided die and Colin has an m-sided die. If they both roll their dice at the same time, return the probability that Peter rolls strictly higher than Colin.

The small print:

* Peter has an n-sided die with sides {1, 2, ..., n} and Colin has an m-sided die with sides {1, 2, ... ,m}.
* The number of sides on both dice is greater than 0.
* Rolling a die is equally likely to roll any of its sides.
* It doesn't matter if either die is unfair.
* The results of each die rolled independently to the results of all other dice rolled.
* If both dice cannot roll any of the same sides, return 0.
* If both dice have some, but not all, sides in common, return the probability that Peter wins after a single roll.
* The result should be rounded to the thousandths place.

Good luck!

"""

def get_sum(n, m):
    s = n + m
    m_min = min([s-n+1, m])
    m_max = min([s-1, m])
    v = 0
    num = m_min
    while (num <= m_max):
        d = num - 1
        dd = m - num
        v += d + dd 
        num += 1
    return v

def is_same_side(n, m):
    return n - 1 == m - 1 or n == m or (n - 1 >= m and m > 1)

if __name__ == '__main__':
