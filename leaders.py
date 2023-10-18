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
def find_leader(input_list):
    """
    :param input_list:
    :return:
    """
    input_list = input_list[::-1]
    leader_list = []
    leader = input_list[0]
    leader_list.append(leader)
    for i in range(1, len(input_list)):
        if input_list[i] >= leader:
            leader = input_list[i]
            leader_list.append(leader)
    return leader_list[::-1]


def get_input():
    """
    :return:
    """
    input_list = []
    input_list_size = int(input())
    input_list = input().split()
    input_list = [int(x) for x in input_list]
    return input_list

if __name__ == '__main__':
    pass
