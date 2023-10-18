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
Given an integer array arr, count element x such that x + 1 is also in arr.
If there're duplicates in arr, count them seperately.
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
