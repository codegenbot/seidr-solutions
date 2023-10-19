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
1
0
0

input:
1
10
output:
1
10
0

input:
1
100
output:
1
100
0

input:
1
1000
output:
1
1000
0

input:
1
10000
output:
1
10000
0

"""

def cut(input):
    array = input.split()
    array = [int(i) for i in array]
    length = len(array)
    if length == 1:
        return array
    if length == 2:
        if array[0] == array[1]:
            return array
        else:
            return [array[0],array[1],0]
    mid = int(length/2)
    if array[mid] == array[mid+1]:
        return array[:mid+1]+[0]+array[mid+1:]
    if array[mid] == array[mid-1]:
        return array[:mid]+[0]+array[mid:]
    if array[mid] > array[mid+1]:
        return array[:mid+1]+[0]+array[mid+1:]
    if array[mid] < array[mid-1]:
        return array[:mid]+[0]+array[mid:]

if __name__ == '__main__':
