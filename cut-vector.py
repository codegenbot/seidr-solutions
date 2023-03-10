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
Given a vector of positive integers, ﬁnd the spot where, if you cut the vector, the numbers on both sides are either equal, or the diﬀerence is as small as possible. 
Return the two resulting subvectors as two outputs.
For example,
input:
1
0
output:
1
0
0

input:
1
10
output:
1
10
0

input:
1
100
output:
1
100
0

input:
1
1000
output:
1
1000
0

input:
1
10000
output:
1
10000
0

"""
if __name__ == '__main__':
    nums = []
    for line in sys.stdin:
        nums.append(line)

    nums = nums[1:]
    max = nums[0]
    min = nums[0]
    for i in range(len(nums)):
        if nums[i] < min:
            min = nums[i]
        if nums[i] > max:
            max = nums[i]

    if max == min:
        print(1)
        print(max)
        print(0)
    else:
        print(1)
        print(max)
        print(min)
