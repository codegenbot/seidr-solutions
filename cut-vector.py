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
100
input:
1
10
output:
1100
input:
1
100
output:
11000
input:
1
1000
output:
110000
input:
1
10000
output:
1100000
"""
def find_cut_point(nums):
    if len(nums) == 0:
        return None
    if len(nums) == 1:
        return 0
    if len(nums) == 2:
        return 1
    if len(nums) == 3:
        if nums[0] == nums[2]:
            return 1
        else:
            return 2
    left = 0
    right = len(nums) - 1
    while left < right:
        mid = (left + right) // 2
        if nums[mid] == nums[mid - 1]:
            return mid
        if nums[mid] == nums[mid + 1]:
            return mid + 1
        if nums[mid] == nums[mid - 1] + 1:
            return mid
        if nums[mid] == nums[mid + 1] + 1:
            return mid + 1
        if nums[mid] > nums[mid - 1] + 1:
            right = mid
        else:
            left = mid
    return left

if __name__ == '__main__':
    nums = [1, 0]
    print(find_cut_point(nums))
    nums = [1, 10]
    print(find_cut_point(nums))
    nums = [1, 100]
    print(find_cut_point(nums))
    nums = [1, 1000]
    print(find_cut_point(nums))
    nums = [1, 10000]
    print(find_cut_point(nums))
