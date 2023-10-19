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
Given a text string and a target string, return a list of integers of the indices at which the target appears in the text.
Targets may overlap.

For example:

Input: a 5

Output: 0

Input: ! !

Output: 1 0

Input: r nm,xcnwqnd@#$fwkdjn3

Output: 0

Input: hi hihihihihihihihihihi

Output: 0

Input: ############ #

Output: 12 0 1 2 3 4 5 6 7 8 9 10 11
"""
if __name__ == '__main__':
    text = input()
    target = input()
    idx = []
    for i in range(len(text)):
        if text[i] == target[0]:
            if text[i:i+len(target)] == target:
                idx.append(i)
    print("\n".join(map(lambda x: str(x), idx)))
