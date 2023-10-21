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

def find_min_diff(nums):
    min_diff = sys.maxsize
    for i in range(1, len(nums)):
        if abs(nums[i-1] - nums[i]) < min_diff:
            min_diff = abs(nums[i-1] - nums[i])
    return min_diff

def find_diff(nums):
    min_diff = find_min_diff(nums)
    for i in range(1, len(nums)):
        if abs(nums[i-1] - nums[i]) == min_diff:
            return i

def find_diff_rec(nums):
    if len(nums) == 0:
        return None
    if len(nums) == 1:
        return nums[0]
    mid = len(nums) // 2
    left = find_diff_rec(nums[0:mid])
    right = find_diff_rec(nums[mid:])
    min_diff = min(abs(left - right))
    return find_min_diff(nums)

if __name__ == '__main__':
    nums = [1, 10, 100, 1000, 10000]
    #print(find_diff(nums))
    print(find_diff_rec(nums))
