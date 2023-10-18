import os
import sys
import numpy as np
import math
import datetime
import collections
import itertools
import queue
import re
import random
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
    total = 0.0
    for i in range(n):
        for j in range(m):
            total += 1
    win = 0.0
    for i in range(n):
        for j in range(m):
            if i > j:
                win += 1
    return win / total


def solution2(n, m):
    return (n - 1) / (n + m - 2) if n > m else 0.0


def solution3(n, m):
    total = 0.0
    win = 0.0
    for x in range(1000000):
        peter = random.randint(1, n)
        colin = random.randint(1, m)
        if peter > colin:
            win += 1
        total += 1
    return win / total


if __name__ == '__main__':
    print(solution(2, 1))
    print(solution2(2, 1))
    print(solution3(2, 1))
