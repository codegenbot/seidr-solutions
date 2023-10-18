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
3
-1
0
output:
1
input:
3
-1
100
output:
0






"""
if __name__ == '__main__':
    a = [0, -1]
    for i in range(len(a)):
        if a[i] >= 0:
            continue
        else:
            print(i) 
            sys.exit(0)
    print(len(a))
