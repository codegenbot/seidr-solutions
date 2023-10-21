import os
import sys
import numpy as np
import math
import datetime
import collections
import itertools
import queue
import re
from functools import reduce
"""
Given a vector of positive integers, ﬁnd the spot where, if you cut the vector, the numbers on both sides are either equal, or the diﬀerence is as small as possible. Return the two resulting subvectors as two outputs.
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

def main():
    nums = list(map(int, input().split()))
    T = int(input())
    for i in range(T):
        n = int(input())
        #print(solve(n))
        print(solve2(n))
def solve(n):
    value = -1
    loc = -1
    for i in range(len(nums)-1):
        diff = abs(nums[i]-nums[i+1])
        if(value==-1):
            value = diff
            loc = i
        elif(diff<value):
            value = diff
            loc = i
    if(loc==0):
        return (nums[0],0)
    elif(loc==len(nums)-1):
        return (0,nums[len(nums)-1])
    else:
        return (nums[loc],nums[loc+1])
def solve2(n):
    diff = [nums[i]-nums[i+1] for i in range(len(nums)-1)]
    min_diff = min(diff)
    pos = diff.index(min_diff)
    if(pos == 0):
        return (nums[0],0)
    elif(pos == len(nums)-2):
        return (0,nums[len(nums)-1])
    else:
        return (nums[pos],nums[pos+1])
def solve1(n):
    loc = -1
    value = -1
    for i in range(len(nums)-1):
        diff = abs(nums[i]-nums[i+1])
        if(value==-1):
            loc = i
            value = diff
        elif(diff<value):
            loc = i
            value = diff
    return loc
def solve0(n):
    return nums
if __name__ == '__main__':
    nums = [1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18]
    T = int(input())
    for i in range(T):
        n = int(input())
        #print(solve(n))
        print(solve0(n))
