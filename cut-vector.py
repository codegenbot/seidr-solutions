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
For example

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
        return nums
    if len(nums) == 2:
        return nums + [0]
    ans = []
    for i in range(len(nums)):
        left = nums[:i]
        right = nums[i:]
        if len(left) > 0 and len(right) > 0:
            if left[-1] == right[0]:
                ans.append(left + right)
            elif abs(left[-1] - right[0]) == 1:
                ans.append(left + [right[0]-1] + right)
            elif abs(left[-1] - right[0]) == 2:
                ans.append(left + [right[0]-1] + right)
                ans.append(left + [right[0]-2] + right)
            else:
                ans.append(left + [right[0]-1] + right)
                ans.append(left + [right[0]-2] + right)
                ans.append(left + [right[0]-3] + right)
    return ans


if __name__ == '__main__':
    nums = [1, 0]
    print(find_spot(nums))
