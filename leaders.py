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
10
input:
1
451
output:
1451
input:
2
1000 0
output:
21000 0
input:
2
0 1000
output:
11000
"""
if __name__ == '__main__':
    N = int(input())
    if N == 0:
        print(0)
    else:
        input_list = list(map(int,input().split()))
        leader_list = []
        leader_list.append(input_list[-1])
        max_num = input_list[-1]
        for i in range(len(input_list)-2,-1,-1):
            if input_list[i] >= max_num:
                leader_list.append(input_list[i])
                max_num = input_list[i]
        for i in range(len(leader_list)-1,-1,-1):
            print(leader_list[i],end=" ")
        print()
