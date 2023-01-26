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
if __name__ == '__main__':
    for line in sys.stdin:
        nums = line.strip().split()
        nums = [int(i) for i in nums]

        if len(nums) == 1:
            print(nums[0])
            continue

        nums = sorted(nums)
        res = 0
        start = 0
        end = len(nums) - 1
        while start < end:
            if nums[start] == nums[end]:
                res += nums[start]
                break
            elif nums[start] < nums[end]:
                res += nums[start]
                end -= 1
            else:
                res += nums[end]
                start += 1

        print(res)
