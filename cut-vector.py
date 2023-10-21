import os
import sys
import numpy as np
import math
import datetime
import collections
import itertools
import queue
import re

def find_min_diff(arr):
    arr.sort()
    min_diff = sys.maxsize
    for i in range(1, len(arr)):
        min_diff = min(min_diff, arr[i] - arr[i - 1])
    return min_diff

def find_max_diff(arr):
    arr.sort()
    max_diff = -sys.maxsize
    for i in range(1, len(arr)):
        max_diff = max(max_diff, arr[i] - arr[i - 1])
    return max_diff

def find_min_max_diff(arr):
    arr.sort()
    min_diff = sys.maxsize
    max_diff = -sys.maxsize
    for i in range(1, len(arr)):
        min_diff = min(min_diff, arr[i] - arr[i - 1])
        max_diff = max(max_diff, arr[i] - arr[i - 1])
    return min_diff, max_diff

input:
1
10000
output:
1
10000
0

"""
if __name__ == '__main__':
