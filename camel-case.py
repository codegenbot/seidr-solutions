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
camel-case example-test-string
output:
camelCase exampleTestString
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
    line = input()
    parts = line.split(" ")
    for part in parts:
        words = part.split("-")
        for i in range(len(words)):
            if i == 0:
                print(words[i], end="")
            else:
                print(words[i].capitalize(), end="")
        print(" ", end="")
