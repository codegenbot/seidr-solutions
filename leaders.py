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
def leader(vector):
    leader_list = []
    if len(vector) == 0:
        return leader_list
    if len(vector) == 1:
        return leader_list.append(vector[0])
    max = vector[-1]
    leader_list.append(max)
    for i in range(len(vector)-2, -1, -1):
        if vector[i] >= max:
            max = vector[i]
            leader_list.append(max)
    leader_list.reverse()
    return leader_list
if __name__ == '__main__':
    num = int(input())
    vector = input().split()
    for i in range(num):
        vector[i] = int(vector[i])
    leader_list = leader(vector)
    for i in range(len(leader_list)):
        print(leader_list[i])
