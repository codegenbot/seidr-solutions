import os
import sys
import numpy as np
import math
import datetime
import collections
import itertools
import queue
import re
from collections import defaultdict
from heapq import *
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
class Solution:
    def leaders(self, A):
        '''
        1. input: a vector A
        2. output: a vector F
        3. f[i] = max{f[j]| 0<=j<i} +1   0<=i<=Len(A)
        4. f[i] = 0  if all f[j] ==0 0<=j<i 0<=i<=Len(A)
        '''
        # Write your code here

        # A = a list of integer
        n = len(A)
        res = []

        # leaders contains all leaders
        # dic = {(i,j):f_i_j,....}  f_i_j denotes the max leader length = m of A[i:j+1]
        # base case: dic[-1,i] = 0   0<=i<=Len(A)
        dic = {}
        dic = defaultdict(lambda: 0, dic)
        leaders = set()
        # leaders_cnt = {}  # key: leaders_cnt[A[r]]  value: cnt of A[r]
        for i in range(0, n):
            #dic[i] = 0
            #leaders_cnt[A[i]] = 0
            m = 0
            mmax = 0
            for j in range(i-1, -1, -1):
                # m: max leader length of A[j:i+1]
                if j >= 1:
                    m = dic[j - 1, j]
                else:
                    m = 0
                m = m + 1 if A[j] <= A[i] else m
                dic[j, i] = m
                # mmax: max leader length of A[i:i+1] = mmax
                mmax = max(mmax, m)
            # dic is updated
            dic[-1, i] = mmax
            # mmax: max leader length of A[i:i+1] = mmax
            mmax = mmax if mmax >= 1 else 0
            if mmax >0:
                leaders.add(A[i])
            res.append(A[i] if mmax > 0 else -1)
            #leaders_cnt[A[i]] = leaders_cnt[A[i]] + 1 if mmax >0 else leaders_cnt[A[i]]
        # leaders_len: len(leaders)
        # leaders_len = len(leaders)

        # res = [-1]
        # for i in range(0,n):
        #     res.append(-1)
        #     if leaders_cnt[A[i]] > 0:
        #         res[i] = leaders_cnt[A[i]]
        return res

if __name__ == '__main__':
    #sys.stdin = open('in.txt', 'r')
    #sys.stdout = open('out.txt', 'w')
    #input = sys.stdin.readline().rstrip()
    #print(Solution().leaders(input))
    res = Solution().leaders([1,2,3,4,0])
    print(res)
