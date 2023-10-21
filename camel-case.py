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
    str = input()
    str_list = str.split(" ")
    for i in range(len(str_list)):
        str_list[i] = str_list[i].split("-")
        for j in range(len(str_list[i])):
            if j == 0:
                str_list[i][j] = str_list[i][j]
            else:
                str_list[i][j] = str_list[i][j].capitalize()
        str_list[i] = "".join(str_list[i])
    str_list = " ".join(str_list)
    print(str_list)
