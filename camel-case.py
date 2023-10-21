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
    a = input()
    b = a.split(' ')
    c = []
    for i in b:
        c.append(i.split('-'))
    d = []
    for i in c:
        for j in i:
            d.append(j)
    e = []
    for i in d:
        if i != '':
            e.append(i)
    f = []
    for i in e:
        if i.isalpha():
            f.append(i)
    g = []
    for i in f:
        g.append(i.capitalize())
    h = []
    for i in g:
        if i.isupper():
            h.append(i.lower())
        else:
            h.append(i)
    h[0] = h[0].capitalize()
    print(''.join(h))
