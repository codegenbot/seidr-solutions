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
def camelCase(s):
    if not s: return s
    res = ''
    if s[0] != '-': res += s[0].lower()
    tmp = s[1:]
    for i, e in enumerate(tmp):
        if e == '-':
            res += ' ' + tmp[i+1].upper()
            tmp = tmp[i+2:]
    if not res: return s
    return res + tmp
if __name__ == '__main__':
    print(camelCase(sys.argv[1]))
