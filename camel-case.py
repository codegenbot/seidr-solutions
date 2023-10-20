import os
import sys
import numpy as np
import math
import datetime
import collections
import itertools
import queue
import re
import string
"""
Take a string in kebab-case and convert all of the words to camelCase. Each group of words to convert is delimited by "-", and each grouping is separated by a space. For example: "camel-case example-test-string" -> "camelCase exampleTestString".
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
    line = "camel-case example-test-string"
    line = line.split(' ')
    for j in range(len(line)):
        line[j] = line[j].split('-')
        for i in range(len(line[j])):
            if i == 0:
                line[j][i] = line[j][i].lower()
            else:
                line[j][i] = line[j][i].title()
        line[j] = ''.join(line[j])

    line = ' '.join(line)
    print(line)
