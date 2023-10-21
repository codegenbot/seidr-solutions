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

def kebabCaseToCamelCase(l):
    output = []
    for x in l:
        y = x.split()
        for i in y:
            j = i.split("-")
            output.append("".join(i.capitalize() for i in j))
        print " ".join(output)
    return " ".join(output)

def kebabCaseToCamelCase2(l):
    s=""
    for x in l:
        t=x.split("-")
        if len(t)>2:
            for i in t:
                s+=i[0].upper()+i[1:]
        else:
            s+= i[0].upper()+i[1:].lower()
    print s
    return s

if __name__ == '__main__':
    l = ["camel-case example-test-string","nospaceordash","two-words","two words","all separate words"]
    print kebabCaseToCamelCase(l)
    print kebabCaseToCamelCase2(l[0])
