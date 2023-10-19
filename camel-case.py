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

def kebab_to_camel(input_str):
    if '-' not in input_str:
        return input_str
    else:
        input_str = input_str.split(' ')
        return ' '.join([kebab_to_camel(word) for word in input_str])

if __name__ == '__main__':
    print(kebab_to_camel("camel-case example-test-string"))
