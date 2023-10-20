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
    s = input()
    a = s.split('-')
    b = s.split(' ')
    if len(a) == 1 and len(b) == 1:
        print(s)
    elif len(a) == 1 and len(b) != 1:
        print(' '.join(b))
    else:
        for i in range(len(a)):
            a[i] = a[i].title()
        print(''.join(a))
