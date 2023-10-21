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
    s=raw_input()
    l=[]
    if " " in s:
        l=s.split(" ")
        print " ".join(l)
    elif "-" in s:
        temp=s.split("-")
        for i in temp:
            l.append(i.capitalize())
    else:
        l.append(s)
    print "".join(l)
