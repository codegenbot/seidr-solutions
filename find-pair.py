import os
import sys
import numpy as np
import math
import datetime
import collections
import itertools
import queue
import re
import random
"""
Given a vector of integers, return the two elements that sum to a target integer.
For example,
input:
2
5 7
12
output:
5
7
input:
2
2500 6352
8852
output:
2500
6352
input:
2
-14 5
-9
output:
-14
5
input:
2
40 -19
21
output:
40
-19
input:
2
-4 4
0
output:
-4
4
"""
if __name__ == '__main__':
    N = int(input())
    for i in range(N):
        target = int(input())
        num_str = input().split()
        nums = [int(num_str[i]) for i in range(len(num_str))]
        result = []
        for j in range(len(nums)):
            for k in range(len(nums)):
                if(j == k):
                    continue
                if(nums[j] + nums[k] == target):
                    result.append(nums[j])
                    result.append(nums[k])
        for j in range(len(result)):
            print(result[j])
