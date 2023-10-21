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
def camelCase(string):
    string = string.split(" ")
    for i in range(len(string)):
        string[i] = string[i].split("-")
        for j in range(len(string[i])):
            string[i][j] = string[i][j].capitalize()
        string[i] = "".join(string[i])
    return " ".join(string)

if __name__ == '__main__':
