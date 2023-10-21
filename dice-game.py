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

def solution(n, m):
    """
    m < n
    peter win -> peter > colin
    peter win + peter lose + colin win = 1
    peter win + peter lose = 1 - colin win
    peter win = 1 - colin win - peter lose
    peter win = 1 - colin win - (1 - peter win)
    2 * peter win = 1 - colin win
    peter win = 1 - colin win / 2
    """
    return (1 - (m / (m + n))) if m < n else (1 - (n / (m + n)))

if __name__ == '__main__':
    n = int(input())
    m = int(input())
    print(solution(n, m))
