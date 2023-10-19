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
