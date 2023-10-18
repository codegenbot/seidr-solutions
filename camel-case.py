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
Take a string in kebab-case and convert all of the words to camelCase. Each group of words to convert is delimited by "-", and each grouping is separated by a space. For example: "camel-case example-test-string" -> "camelCase exampleTestString". Make sure that "  ->  ". 
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
    p = re.compile("([a-zA-Z]+)-([a-zA-Z]+)")
    while True:
        m = p.search(s)
        if m:
            s = s[:m.start(1)] + m.group(1) + m.group(2).capitalize() + s[m.end(2):]
        else:
            break
    print(s)
