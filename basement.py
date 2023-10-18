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
2
-1
output:
1
input:
2
-1 100
output:
0


2
-1



"""
if __name__ == '__main__':
    a = [2,-1]
    print(a.index(2))
