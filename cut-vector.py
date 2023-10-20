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
Given a vector of positive integers, find the spot where, if you cut the vector, the numbers on both sides are either equal, or the difference is as small as possible.
Return the two resulting subvectors as two outputs. For example,
input: 1 0 output: 1 0 0 input: 1 10 output: 1 10 0 input: 1 100 output: 1 100 0 input: 1 1000 output: 1 1000 0 input: 1 10000 output: 1 10000 0 input: 4 774 8382 6633 8438 output: 2 774 8382 2 6633 8438
"""
def get_input():
    line = input()
    n = int(line)
    line = input()
    a = [int(x) for x in line.split()]
    return n, a

def get_median(a):
    return a[len(a)//2]

def get_subarray(a, median):
    i = 0
    j = len(a) - 1
    while i <= j:
        if a[i] < median:
            i += 1
        elif a[j] > median:
            j -= 1
        else:
            a[i], a[j] = a[j], a[i]
            i += 1
            j -= 1
    return a[:i]

def solve(n, a):
    if n == 1:
        print(1)
        print(a[0])
        print(0)
    else:
        median = get_median(a)
        subarray = get_subarray(a, median)
        print(len(subarray))
        print(" ".join([str(x) for x in subarray]))
        print(n - len(subarray))
        print(" ".join([str(x) for x in a[len(subarray):]]))

if __name__ == '__main__':
    n, a = get_input()
    solve(n, a)
