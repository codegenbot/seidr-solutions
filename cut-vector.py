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
Given a vector of positive integers, ﬁnd the spot where, if you cut the vector, the numbers on both sides are either equal, or the diﬀerence is as small as possible. Return the two resulting subvectors as two outputs. For example,
input:
16
7204 177 9864 9810 7889 1992 964 8202 8693 5578 3248 3341 8632 9231 1424 4296
output:
8
7204 177 9864 9810 7889 1992 964 8202
8
8693 5578 3248 3341 8632 9231 1424 4296
"""
def find_split(nums):
    n = len(nums)
    if n == 1:
        return (1, 1)
    if n == 2:
        return (1, 1) if nums[0] == nums[1] else (1, 2)
    # n >= 3
    left_sum, right_sum = nums[0], sum(nums[1:])
    left_count, right_count = 1, n-1
    min_diff = abs(left_sum - right_sum)
    min_left_count, min_right_count = 1, n-1
    for i in range(1, n-1):
        left_sum += nums[i]
        right_sum -= nums[i]
        left_count += 1
        right_count -= 1
        if abs(left_sum - right_sum) < min_diff:
            min_diff = abs(left_sum - right_sum)
            min_left_count, min_right_count = left_count, right_count
    return (min_left_count, min_right_count)
if __name__ == '__main__':
    n = int(input())
    nums = list(map(int, input().split()))
    assert n == len(nums)
    left_count, right_count = find_split(nums)
    print(left_count)
    print(' '.join(map(str, nums[:left_count])))
    print(right_count)
    print(' '.join(map(str, nums[-right_count:])))
