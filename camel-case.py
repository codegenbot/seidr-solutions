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
    if s.find("-") == -1 and s.find(" ") == -1:
        print(s)
    elif s.find("-") == -1 and s.find(" ") != -1:
        b = s.replace(' ', '')
        print(b.lower())
    else:  
        if s.find("-") != -1:
            s = s.replace('-', ' ')
            a = s.split()
            a[0] = a[0].lower()
            for i in range(1, len(a)):
                a[i] = a[i].capitalize()
            print("".join(a))
        elif s.find(" ") != -1:
            b = s.replace(' ', '')
            print(b.lower())
