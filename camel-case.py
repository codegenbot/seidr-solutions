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
Make sure that  -> 
For example,
input:

output:

input:
nospaceordash
output:
nospaceordash
input:
two-words
output:
twoWords
input:
two words
output:
two words
input:
all separate words
output:
all separate words
"""
if __name__ == '__main__':
    str = input()
    str = str.split(' ')
    for i in range(len(str)):
        str[i] = str[i].split('-')
    for i in range(len(str)):
        for j in range(len(str[i])):
            if j == 0:
                str[i][j] = str[i][j].lower()
            else:
                str[i][j] = str[i][j].capitalize()
        str[i] = ''.join(str[i])
    str = ' '.join(str)
    print(str)
