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
Write a program that takes a string and returns a string where each word is capitalized.
For example,
input:
hello world
output:
Hello World
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
