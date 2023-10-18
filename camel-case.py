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
You are given a string containing only digits 0-9, commas ,, and dots ..
Your task is to complete the regex_pattern defined below, which will be used to re.split() all of the , and . symbols in .
It’s guaranteed that every comma and every dot in  is preceeded and followed by a digit.
Sample Input 
100,000,000.000
Sample Output
100
000
000
000
"""
if __name__ == '__main__':
    ss = input()
    if not ss:
        print(ss)
        exit()
    ss = ss.replace('-', ' ')
    ss = ss.replace('  ', ' ')
    ss = ss.split(' ')
    for i, v in enumerate(ss):
        if i == 0:
            ss[i] = v
        else:
            ss[i] = v.capitalize()
    print(''.join(ss))
