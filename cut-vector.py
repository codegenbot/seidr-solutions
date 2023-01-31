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
Given a list of numbers, return the number of groups of numbers that are equal.
For example, given the list [1, 2, 3, 1, 2, 3, 1, 2, 3], return 3.
"""
if __name__ == '__main__':
    nums = list(map(int, input().split()))
    nums.sort()
    ans = 1
    for i in range(1, len(nums)):
        if nums[i] != nums[i - 1]:
            ans += 1
    print(ans)
