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
Given a text string and a target string, return a list of integers of the indices at which the target appears in the text. Targets may overlap.
For example,
input:
a
5
output:
0

input:
!
!
output:
1
0
input:
r
nm,xcnwqnd@#$fwkdjn3
output:
0

input:
hi
hihihihihihihihihihi
output:
0

input:
############
#
output:
12
0 1 2 3 4 5 6 7 8 9 10 11
"""


def find_indices(text, pattern):
    indices = []
    i = 0
    while i < len(text):
        j = 0
        while j < len(pattern) and i + j < len(text) and text[i + j] == pattern[j]:
            j += 1
        if j == len(pattern):
            indices.append(i)
        i += 1
    return indices


if __name__ == '__main__':
    text = input()
    pattern = input()
    indices = find_indices(text, pattern)
    if len(indices) == 0:
        print(0)
    else:
        print(' '.join([str(i) for i in indices]))
