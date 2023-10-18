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
Given a vector of positive integers, return a vector of the leaders in that vector.
A leader is deﬁned as a number that is greater than or equal to all the numbers tothe right of it.
The rightmost element is always a leader.
For example,
input:
0

output:
0

input:
1
0
output:
1
0
input:
1
451
output:
1
451
input:
2
1000 0
output:
2
1000 0
input:
2
0 1000
output:
1
1000
"""

def find_leaders(nums):
    leaders = [nums[-1]]
    for i in range(len(nums) - 2, -1, -1):
        if nums[i] >= leaders[0]:
            leaders.insert(0, nums[i])
    return leaders


if __name__ == '__main__':
    nums = [int(x) for x in input().split()]
    if len(nums) == 1:
        print(1)
    else:
        print(len(find_leaders(nums)))
    print(' '.join(map(str, reversed(find_leaders(nums)))))
