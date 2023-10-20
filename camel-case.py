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
Take a string in kebab-case and convert all of the words to camelCase. Each group of words to convert is delimited by "-", and each grouping is separated by a space. For example: "camel-case example-test-string" -> "camelCase exampleTestString".
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
def camelCase(str):
    lst = str.split()
    for i in range(len(lst)):
        if '-' in lst[i]:
            lst.extend(lst[i].split('-'))
            lst.remove(lst[i])
    for i in range(len(lst)):
        lst[i] = lst[i].capitalize()
    string = lst[0]
    for i in range(1,len(lst)):
        string += lst[i]
    return string
if __name__ == '__main__':
    print(camelCase("camel-case example-test-string"))
    print(camelCase("nospaceordash"))
    print(camelCase("two-words"))
    print(camelCase("two words"))
    print(camelCase("all separate words"))
