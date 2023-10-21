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
    peter = np.arange(1,n+1)
    colin = np.arange(1,m+1)
    peter_roll = np.zeros(n)
    colin_roll = np.zeros(m)
    for i in range(n):
        peter_roll[i] = peter[i]/n
    for i in range(m):
        colin_roll[i] = colin[i]/m
    peter_roll_m = np.tile(peter_roll,(m,1))
    colin_roll_n = np.tile(colin_roll,(n,1))
    colin_roll_n = colin_roll_n.T
    peter_roll_m = peter_roll_m.T
    colin_roll_n = colin_roll_n.T
    peter_roll_m = peter_roll_m.T
    peter_roll_m = peter_roll_m.T
    colin_roll_n = colin_roll_n.T
    colin_roll_n = colin_roll_n.T
    peter_roll_m = peter_roll_m.T
    colin_roll_n = colin_roll_n.T
    colin_roll_n = colin_roll_n.T
    peter_roll_m = peter_roll_m.T
    colin_roll_n = colin_roll_n.T
    peter_roll_m = peter_roll_m.T
    colin_roll_n = colin_roll_n.T
    peter_roll_m = peter_roll_m.T
    colin_roll_n = colin_roll_n.T
    peter_roll_m = peter_roll_m.T
    colin_roll_n = colin_roll_n.T
    peter_roll_m = peter_roll_m.T
    colin_roll_n = colin_roll_n.T
    peter_roll_m = peter_roll_m.T
    colin_roll_n = colin_roll_n.T
    peter_roll_m = peter_roll_m.T
    colin_roll_n = colin_roll_n.T
    peter_roll_m = peter_roll_m.T
    colin_roll_n = colin_roll_n.T
    peter_roll_m = peter_roll_m.T
    colin_roll_n = colin_roll_n.T
    peter_roll_m = peter_roll_m.T
    colin_roll_n = colin_roll_n.T
    peter_roll_m = peter_roll_m.T
    colin_roll_n = colin_roll_n.T
    peter_roll_m = peter_roll_m.T
    colin_roll_n = colin_roll_n.T
    peter_roll_m = peter_roll_m.T
    colin_roll_n = colin_roll_n.T
    peter_roll_m = peter_roll_m.T
    colin_roll_n = colin_roll_n.T
    peter_roll_m = peter_roll_m.T
    colin_roll_n = colin_roll_n.T
    peter_roll_m = peter_roll_m.T
    colin_roll_n = colin_roll_n.T
    peter_roll_m = peter_roll_m.T
    colin_roll_n = colin_roll_n.T
    peter_roll_m = peter_roll_m.T
    colin_roll_n = colin_roll_n.T
    peter_roll_m = peter_roll_m.T
    colin_roll_n = colin_roll_n.T
    peter_roll_m = peter_roll_m.T
    colin_roll_n = colin_roll_n.T
    peter_roll_m = peter_roll_m.T
    colin_roll_n = colin_roll_n.T
    peter_roll_m = peter_roll_m.T
    colin_roll_n = colin_roll_n.T
    peter_roll_m = peter_roll_m.T
    colin_roll_n = colin_roll_n.T
    peter_roll_m = peter_roll_m.T
    colin_roll_n = colin_roll_n.T
    peter_roll_m = peter_roll_m.T
    colin_roll_n = colin_roll_n.T
    peter_roll_m = peter_roll_m.T
    colin_roll_n = colin_roll_n.T
    peter_roll_m = peter_roll_m.T
    colin_roll_n = colin_roll_n.T
    peter_roll_m = peter_roll_m.T
    colin_roll_n = colin_roll_n.T
    peter_roll_m = peter_roll_m.T
    colin_roll_n = colin_roll_n.T
    peter_roll_m = peter_roll_m.T
    colin_roll_n = colin_roll_n.T
    peter_roll_m = peter_roll_m.T
    colin_roll_n = colin_roll_n.T
    peter_roll_m = peter_roll_m.T
    colin_roll_n = colin_roll_n.T
    peter_roll_m = peter_roll_m.T
    colin_roll_n = colin_roll_n.T
    peter_roll_m = peter_roll_m.T
    colin_roll_n = colin_roll_n.T
    peter_roll_m = peter_roll_m.T
    colin_roll_n = colin_roll_n.T
    peter_roll_m = peter_roll_m.T
    colin_roll_n = colin_roll_n.T
    peter_roll_m = peter_roll_m.T
    colin_roll_n = colin_roll_n.T
    peter_roll_m = peter_roll_m.T
    colin_roll_n = colin_roll_n.T
    peter_roll_m = peter_roll_m.T
    colin_roll_n = colin_roll_n.T
    peter_roll_m = peter_roll_m.T
    colin_roll_n = colin_roll_n.T
    peter_roll_m = peter_roll_m.T
    colin_roll_n = colin_roll_n.T
    peter_roll_m = peter_roll_m.T
    colin_roll_n = colin_roll_n.T
    peter_roll_m = peter_roll_m.T
    colin_roll_n = colin_roll_n.T
    peter_roll_m = peter_roll_m.T
    colin_roll_n = colin_roll_n.T
    peter_roll_m = peter_roll_m.T
    colin_roll_n = colin_roll_n.T
    peter_roll_m = peter_roll_m.T
    colin_roll_n = colin_roll_n.T
    peter_roll_m = peter_roll_m.T
