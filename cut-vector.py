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
For example:
input: 3
6356 6368 1775
output: 1
6356
2
6368 1775
"""

def solution(nums):
    ans = {}
    for num in nums:
        if num not in ans:
            ans[num] = 1
        else:
            ans[num] += 1
    return ans

def print_ans(ans):
    print(len(ans))
    for key in ans:
        print(key)
        print(ans[key])

if __name__ == '__main__':
    n = int(input())
    nums = list(map(int, input().split()))
    ans = solution(nums)
    print_ans(ans)
