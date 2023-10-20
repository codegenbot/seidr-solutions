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
    s = s.split()
    result = ""
    for word in s:
        if word.find('-') != -1:
            word = word.split('-')
            word[0] = word[0][0].upper() + word[0][1:]
            word = "".join(word)
            result += word
        else:
            result += word
    print(result)
