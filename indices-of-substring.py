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

def kmp_search(text, pattern):
    """Given a text string and a target string, return a list of integers of the indices at which the target appears in the text. Targets may overlap."""
    # Compute the prefix function of the pattern.
    prefix = compute_prefix(pattern)

    # Use the prefix function to find all occurrences of the pattern in the text.
    result = []
    k = 0  # Number of chars matched in the pattern.
    for i in range(len(text)):
        while k > 0 and pattern[k] != text[i]:
            k = prefix[k - 1]
        if pattern[k] == text[i]:
            k += 1
        if k == len(pattern):
            result.append(i - len(pattern) + 1)
            k = prefix[k - 1]
    return result

def compute_prefix(pattern):
    """Compute the prefix function of a string."""
    prefix = [0]
    k = 0
    for i in range(1, len(pattern)):
        while k > 0 and pattern[k] != pattern[i]:
            k = prefix[k - 1]
        if pattern[k] == pattern[i]:
            k += 1
        prefix.append(k)
    return prefix

if __name__ == '__main__':
