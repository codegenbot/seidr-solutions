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


Solution:
import re

def convert_to_camel_case(s):
    words = s.split(' ')
    words = [re.sub('-', ' ', w) for w in words]
    words = [w.split(' ') for w in words]
    words = [w[0] + ''.join([w[i].capitalize() for i in range(1, len(w))]) for w in words]
    return ' '.join(words)


print(convert_to_camel_case('camel-case example-test-string'))
print(convert_to_camel_case('nospaceordash'))
print(convert_to_camel_case('two-words'))
print(convert_to_camel_case('two words'))
print(convert_to_camel_case('all separate words'))
"""
if __name__ == '__main__':
