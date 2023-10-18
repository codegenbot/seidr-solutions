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
Given a vector of integers, return the ﬁrst index such that the sum of all integers from the start of the vector to that index (inclusive) is negative.
For example,
input:
1
-1
output:
0
input:
1
-100
output:
0
input:
2
-1 100
output:
0
input:
2
-95 100
output:
0
input:
2
-30 5
output:
0
"""
if __name__ == '__main__':

    line = sys.stdin.readline().strip().split()
    n = int(line[0])
    arr = list(map(int, line[1:]))
    sum = 0
    for i in range(n):
        sum += arr[i]
        if sum < 0:
            print(i)
            break
