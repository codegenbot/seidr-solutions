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
Make sure that the strings a and b contain the same number of characters. If characters are missing, then add spaces.
For example,
input:
deep purple
output:
deep purple
input:
oceans twelve
output:
oceans twelve
input:
talawah!
output:
talawah!
input:
hall and oates
output:
hall and oates
input:
jumped over the candlestick
output:
jumped over the  candlestick
input:
diazepam valium xanax ativan
output:
diazepam   valium xanax  ativan

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
