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
Given a vector of positive integers, return a vector of the leaders in that vector. A leader is deﬁned as a number that is greater than or equal to all the numbers tothe right of it. The rightmost element is always a leader.
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
if __name__ == '__main__':
    test_cases = int(input())
    for _ in range(test_cases):
        n = int(input())
        arr = list(map(int, input().split()))
        max_num = arr[-1]
        if max_num > 0:
            print(max_num)
        for i in range(n-2, -1, -1):
            if arr[i] >= max_num:
                print(arr[i])
                max_num = arr[i]
