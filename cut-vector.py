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
3
6356 6368 1775
output: 1
6356
2
6368 1775
"""
def get_index(n):
    for i in range(len(n)):
        if n[i] != '0':
            return i

def compare_count(n1, n2):
    cnt1 = 0
    cnt2 = 0
    for i in range(len(n1)):
        if n1[i] == '1':
            cnt1 += 1
        if n2[i] == '1':
            cnt2 += 1
    if cnt1 > cnt2:
        return -1
    elif cnt1 < cnt2:
        return 1
    else:
        return 0

def compare_content(n1, n2):
    cnt = len(n1)
    for i in range(cnt):
        if compare_count(n1[i], n2[i]) == 0:
            pass
        else:
            return compare_count(n1[i], n2[i])

def compare_index(n1, n2):
    if get_index(n1) > get_index(n2):
        return 1
    else:
        return -1

def solution(nums):
    ans = []
    ans1 = []
    ans2 = []
    nums.sort()
    for i in range(len(nums)):
        ans.append('{0:b}'.format(nums[i]))
    #print(ans)
    for i in range(1, len(nums)):
        if compare_content(ans[0], ans[i]) == 0:
            ans1.append(nums[i])
        else:
            ans2.append(nums[i])
    #print(ans)
    print(len(ans1) + 1)
    print(nums[0])
    print(len(ans2))
    for i in range(len(ans2)):
        print(ans2[i], end = ' ')

if __name__ == '__main__':
    n = int(sys.stdin.readline().strip()) # n是整数的个数
    nums = list(map(int, sys.stdin.readline().strip().split()))
    solution(nums)
