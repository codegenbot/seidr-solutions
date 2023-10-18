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
def find_spot(nums):
    if len(nums) == 1:
        return nums, []
    if len(nums) == 2:
        return nums, nums
    if nums[0] == nums[-1]:
        return [nums[0]], [nums[-1]]
    if nums[0] > nums[-1]:
        return [nums[0]], [nums[-1]] + nums[:-1]
    if nums[0] < nums[-1]:
        return [nums[0]] + nums[1:], [nums[-1]]

if __name__ == '__main__':
    nums = [int(x) for x in sys.stdin.readlines()]
    left, right = find_spot(nums)
    print(len(left))
    print(' '.join([str(x) for x in left]))
    print(len(right))
    print(' '.join([str(x) for x in right]))
