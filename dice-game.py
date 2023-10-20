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

def rollDie(n, m):
    peter = np.arange(1,n+1)
    colin = np.arange(1,m+1)
    peter_prob = np.zeros(n)
    colin_prob = np.zeros(m)
    peter_prob.fill(1/n)
    colin_prob.fill(1/m)
    peter_win = 0
    for i in range(n):
        for j in range(m):
            if peter[i] > colin[j]:
                peter_win += peter_prob[i] * colin_prob[j]
            else:
                continue
    return peter_win

if __name__ == '__main__':
    print("%.1f" % rollDie(1,2))
    print("%.1f" % rollDie(2,1))
    print("%.2f" % rollDie(99,100))
    print("%.1f" % rollDie(100,99))
    print("%.1f" % rollDie(1,100))
