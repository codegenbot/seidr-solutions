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
Take a string in kebab-case and convert all of the words to camelCase. Each group of words to convert is delimited by "-", and each grouping is separated by a space. For example: "camel-case example-test-string"-> "camelCase exampleTestString".
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
    ss = input()
    if not ss:
        print(ss)
    ss = ss.replace('-', ' ').replace('_', ' ')
    ss = ss.replace('  ', ' ')
    ss = ss.split(' ')
    for i, v in enumerate(ss):
        if i == 0:
            ss[i] = v
        else:
            ss[i] = v.capitalize()
    print(''.join(ss))
