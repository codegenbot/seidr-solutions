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
def roll_dice(n, m):
    if n > m:
        return 1
    elif n == m:
        return 0.5
    else:
        return 0

def roll_dice_simulation(n, m):
    if n > m:
        return 1
    elif n == m:
        return 0.5
    else:
        N = 1000000
        count = 0
        for _ in range(N):
            peter = random.randint(1, n)
            colin = random.randint(1, m)
            if peter > colin:
                count += 1
        return count / float(N)

def roll_dice_math(n, m):
    if n > m:
        return 1
    elif n == m:
        return 0.5
    else:
        return (sum(1.0 / i for i in range(n + 1, m + 1))) / (m - n)

def test():
    for n in range(1, 101):
        for m in range(1, 101):
            print n, m, roll_dice(n, m), roll_dice_simulation(n, m), roll_dice_math(n, m)
            assert roll_dice(n, m) == roll_dice_math(n, m)
            assert roll_dice(n, m) == roll_dice_simulation(n, m)

if __name__ == '__main__':
    test()
