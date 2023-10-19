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
Take a string in kebab-case and convert all of the words to camelCase. Each group of words to convert is delimited by "-", and each grouping is separated by a space. For example: "camel-case example-test-string"-> "camelCase exampleTestString". If a string has multiple `-` next to each other that should be replaced with a space and a just a single instance. For example: "one--two--three" -. For example,
For example,
input:
camel-case example-test-string
output:
camelCase exampleTestString
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
input:
one--two--three
output:
one two three
input:
two-hyphens----still two--hyphens
output:
twoHyphens twoHyphens
"""
if __name__ == '__main__':
    s = input()
    if s.find("-") == -1:
        print(s)
    else:
        #       for i in range(0, s.count('-')):
        #           s.replace(i, '-')
        s = re.sub('[-]{2,}', ' ', s)
        s = s.replace('-', ' ')
        a = s.split()
        a[0] = a[0].lower()
        for i in range(1, len(a)):
            a[i] = a[i].capitalize()
        print("".join(a))
