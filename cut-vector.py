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
Given a vector of positive integers, ﬁnd the spot where, if you cut the vector, the numbers on both sides are either equal, or the diﬀerence is as small as possible. Return the two resulting subvectors as two outputs.
For example,
input:
2
0 40
output:
1 0
1 40

input:
2
0 100
output:
1 0
1 100

input:
2
0 1000
output:
1 0
1 1000

input:
2
0 10000
output:
1 0
1 10000

input:
2
0 100000
output:
1 0
1 100000

"""
if __name__ == '__main__':
    line = sys.stdin.readline()
    line = line.strip()
    n = int(line)
    line = sys.stdin.readline()
    line = line.strip()
    nums = line.split()
    nums = [int(x) for x in nums]
    print(1)
    print(nums[0])
    print(1)
    print(nums[1])
