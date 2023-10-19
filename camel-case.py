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
input_dict = [
    'camel-case example-test-string',
    'nospaceordash',
    'two-words',
    'two words',
    'all separate words'
]
def camel_case(s):
    r = []
    s_list = list(s.split(' ')[0].split('-'))
    r.append(s_list[0])
    for i in range(1, len(s_list)):
        r.append(s_list[i].capitalize())
    for i in range(1, len(s.split(' '))):
        r.append(s.split(' ')[i])
    return ' '.join(r)

if __name__ == '__main__':
    for line in input_dict:
        print(camel_case(line))
