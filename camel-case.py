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
input: 

output: 

input: 

output: 

input: 

output: 

input: 

output: 

input: 

output: 

"""
if __name__ == '__main__':
    ss = input()
    ss = ss.replace('-', ' ')
    while '  ' in ss:
        ss = ss.replace('  ', ' ')
    if not ss:
        print(ss)
    ss = ss.split(' ')
    for i, v in enumerate(ss):
        if i == 0:
            ss[i] = v
        else:
            ss[i] = v.capitalize()
    print(''.join(ss))
