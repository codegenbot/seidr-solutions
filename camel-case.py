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
def kebab2Camel(s):
    if s.find("-") == -1:  # if s.find("-") == None:
        return s
    return " ".join(map(lambda s: s[0].upper() + s[1:], s.split("-")[1:]))

if __name__ == '__main__':
