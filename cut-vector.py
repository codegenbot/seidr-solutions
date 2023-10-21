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
Given a vector of positive integers, ﬁnd the spot where, if you cut the vector, the numbers on both sides are either equal,
or the diﬀerence is as small as possible. Return the two resulting subvectors as two outputs.
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
def cut(nums):
    if len(nums) == 1:
        return [nums, [0]]
    if len(nums) == 2:
        return [nums, [0]]
    if len(nums) == 3:
        return [nums, [0]]
    for i in range(1, len(nums) - 1):
        if nums[i] == nums[i - 1] or nums[i] == nums[i + 1]:
            return [nums[:i], nums[i:]]
        if nums[i] - nums[i - 1] == nums[i + 1] - nums[i]:
            return [nums[:i], nums[i:]]
        if nums[i] - nums[i - 1] < nums[i + 1] - nums[i]:
            return [nums[:i], nums[i:]]
        if nums[i] - nums[i - 1] > nums[i + 1] - nums[i]:
            return [nums[:i + 1], nums[i + 1:]]


if __name__ == '__main__':
