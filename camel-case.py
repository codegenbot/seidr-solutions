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
# Given a binary tree, return the level order traversal of its nodes' values. (ie, from left to right, level by level).
#
# For example:
# Given binary tree [3,9,20,null,null,15,7],
#
#     3
#    / \
#   9  20
#     /  \
#    15   7
# return its level order traversal as:
# [
#   [3],
#   [9,20],
#   [15,7]
# ]
#
#
# Constraints:
#
# 1 <= s.length <= 100
# s only contains lower case English letters.
# 1 <= shift.length <= 100
# shift[i].length == 2
# 0 <= shift[i][0] <= 1
# 0 <= shift[i][1] <= 100
"""
if __name__ == '__main__':
    ss = input()
    # ss = ss.replace('-', ' ')
    # ss = ss.replace('  ', ' ')
    if not ss:
        print(ss)
    ss = ss.split('-')
    for i, v in enumerate(ss):
        if i == 0:
            ss[i] = v
        else:
            ss[i] = v.capitalize() # 
    print(''.join(ss))
