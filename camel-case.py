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

    line = raw_input()
    words = line.split()
    res = []
    for word in words:
        if "-" in word:
            new_word = ""
            strs = word.split("-")
            for i in range(len(strs)):
                if i == 0:
                    new_word += strs[i].strip()
                else:
                    new_word += strs[i].strip().title()
            res.append(new_word)
        else:
            res.append(word)
    print " ".join(res)
