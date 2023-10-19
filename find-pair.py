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
    n=int(input())
    numList = [int(x) for x in input().strip().split(' ')]
    target=int(input())
"""
    opt = {}
    for ind, num in enumerate(numList):
        if num in opt:
            opt.pop(num)
        else:
            opt[target-num] = (ind,num)
    keys = list(opt.keys())
    keys.sort()
    print(keys)
    max_ind,max_num = opt[keys[0]]
    al_ind,al_num = opt[keys[1]]
    if max_num > al_num:
        a,b = al_num,max_num
    else:
        a,b = max_num,al_num
    """

    opt = {}
    for ind, num in enumerate(numList):
        if num not in opt:
            opt[target-num] = (ind,num)

    my_list = []
    for ind,num in enumerate(numList):
        if num in opt and opt[num][0] != ind:
            my_list = [(num,opt[num][1]),(numList[opt[num][0]],numList[opt[num][0]])]
            mylist.sort([0])
            print(mylist[0][0],mylist[0][1])
            break
