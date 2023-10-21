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
    for line in sys.stdin:
        line = line.strip()
        if line == "":
            continue
        words = line.split()
        for i in range(len(words)):
            if "-" in words[i]:
                words[i] = words[i].replace("-", " ")
        words = " ".join(words)
        words = words.split()
        for i in range(len(words)):
            words[i] = words[i].capitalize()
        words = "".join(words)
        words = words[0].lower() + words[1:]
        print(words)
