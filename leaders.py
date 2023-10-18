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
Given a vector of positive integers, return a vector of the leaders in that vector. 
A leader is deﬁned as a number that is greater than or equal to all the numbers tothe right of it. 
The rightmost element is always a leader.

#input:
#0

#output:
#0

#input:
#1
#0
#output:
#1
#0
#input:
#1
#451
#output:
#1
#451
#input:
#2
#1000 0
#output:
#2
#1000 0
#input:
#2
#0 1000
#output:
#1
#1000
"""
def find_leaders(lst):
    leaders = []
    for i in range(len(lst)):
        j = i+1
        while j < len(lst):
            if lst[i] < lst[j]:
                break
            j += 1
        if j == len(lst):
            leaders.append(lst[i])
    return leaders


if __name__ == '__main__':
    n = int(input())
    if n == 0:
        print(n)
    else:
        lst = [int(x) for x in input().split()]
        print(find_leaders(lst))
