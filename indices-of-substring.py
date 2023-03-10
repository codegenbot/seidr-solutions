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
# input:
# a
# 5
# output:
# 0

# input:
# !
# !
# output:
# 1
# 0
# input:
# r
# nm,xcnwqnd@#$fwkdjn3
# output:
# 0

# input:
# hi
# hihihihihihihihihihi
# output:
# 0

# input:
# ############
# #
# output:
# 12
# 0 1 2 3 4 5 6 7 8 9 10 11
"""


def find(text, target):
    ans = []
    for i in range(len(text) - len(target) + 1):
        for j in range(len(target)):
            if text[i + j] != target[j]:
                break
        else:
            ans.append(i)
    return ans


if __name__ == '__main__':
    text = sys.stdin.readline().strip()
    target = sys.stdin.readline().strip()
    ans = find(text, target)
    print(len(ans))
    print(*ans)
