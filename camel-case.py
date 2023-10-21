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
    new_s = ""
    i = 0
    while i < len(s):
        if i < (len(s) - 1) and s[i + 1] == "-" and s[i] == " ":
            i += 2
            continue
        elif s[i] == "-":
            new_s += s[i + 1].upper()
            i += 2
            continue
        new_s += s[i]
        i += 1
    print(new_s)
    # s = input()
    # new_s = ""
    # i = 0
    # while i < len(s):
    #     if i < (len(s) - 1) and s[i + 1] == "-" and s[i] == " ":
    #         i += 2
    #         continue
    #     elif s[i] == "-":
    #         new_s += s[i + 1].upper()
    #         i += 2
    #         continue
    #     new_s += s[i]
    #     i += 1
    # print(new_s)
