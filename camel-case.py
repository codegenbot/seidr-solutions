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
    input_str = input()
    if input_str.find("-") == -1:
        print(input_str)
    else:
        input_list = input_str.split("-")
        output_str = ''
        for i in input_list:
            output_str += i[0].upper() + i[1:]
        print(output_str)
