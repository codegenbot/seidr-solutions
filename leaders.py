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

def find_leaders(input_list):
    output = []
    leader = 0

    for i in range(len(input_list)-1,-1,-1):
        if input_list[i] >= leader:
            leader = input_list[i]
            output.append(leader)

    return output[::-1]


if __name__ == '__main__':
    input_list = []

    for i in range(int(input())):
        input_list.append(int(input()))
    #input_list=[1,58,2,100,12,98,100]
    output_list = find_leaders(input_list)
    for i in output_list:
        print(i)
