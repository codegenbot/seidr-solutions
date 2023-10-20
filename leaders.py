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
7
5 5 5 5 5 5 5
output:
7
5 5 5 5 5 5 5
"""
if __name__ == '__main__':
    n = int(input())
    a = [int(i) for i in input().split()]
    ans = []
    mx = -1
    for i in range(n-1, -1, -1):
        if mx < a[i]:
            mx = a[i]
            ans.append(a[i])
    print(len(ans))
    print(*ans[::-1])
