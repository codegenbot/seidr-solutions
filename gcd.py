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
Given two integers, return the largest integer that divides each of the integers evenly.
Indices of Substring (CW) Given a text string and a target string, return a vector of integers of the indices at which the target appears in the text. If the target string overlaps itself in the text, all indices (including those overlapping) should be returned.
For example,
input:
1
1
output:
1
input:
4
400000
output:
4
input:
54
24
output:
6
input:
4200
3528
output:
168
input:
820000
63550
output:
2050
"""
def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return a

def find_indices(text, target):
    indices = []
    index = 0
    while index < len(text):
        index = text.find(target, index)
        if index == -1:
            return indices
        indices.append(index)
        index += 1
    return indices

if __name__ == '__main__':
