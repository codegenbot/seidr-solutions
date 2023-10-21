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
    # get the first line of the input
    n = int(input())
    # get the second line of the input
    l = input()
    # get the list of integers
    l = l.split()
    l = [int(i) for i in l]
    # get the leaders
    leaders = []
    for i in range(n):
        # if the last element of the list is reached
        if i == n - 1:
            leaders.append(l[i])
        else:
            # check if the current element is greater than the next element
            if l[i] >= l[i+1]:
                leaders.append(l[i])
    # print the leaders
    print(leaders)
