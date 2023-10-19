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
Given a kebab-cased string, one that only contains lowercase alphanumeric characters and dashes, convert it to camelCase . The first word within the output should be capitalized only if the original word was capitalized.

input:
make-sure-that -> makeSureThat
output:

make-sure that -> makeSure that
display the list vertically
display the list vertically
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
