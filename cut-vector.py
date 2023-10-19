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
Given two vectors of positive integers, ﬁnd the spot where, if you cut the vectors, the numbers on both sides are either equal, or the diﬀerence is as small as possible. Return the two resulting subvectors as two outputs.
For example:

input:
2
2
129
output:
1
1
129
"""
if __name__ == '__main__':
    nums = []
    num = int(input())
    for _ in range(num):
        nums.append(int(input()))
    print(len(nums))
    print(nums[len(nums) // 2])
    print(1)
    print(nums[len(nums) // 2])
