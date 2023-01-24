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
    nums = [int(i) for i in input().split()]
    n = len(nums)
    f = [[0 for j in range(n)] for i in range(n)]
    for i in range(n):
        f[i][i] = nums[i]
    for i in range(n):
        for j in range(i+1,n):
            f[i][j] = f[i][j-1]*10+nums[j]
    ans = [[0 for j in range(n)] for i in range(n)]
    for i in range(n):
        ans[i][i] = f[0][i]*f[i+1][n-1]
    for i in range(n-1):
        for j in range(i+1,n):
            ans[i][j] = min(ans[i][j-1],f[0][i]*f[j][n-1])
    print(ans[0][n-1])

