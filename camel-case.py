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


input:
two-words
output:
twoWords
input:
all separate words
output: 
all separate words
input:
nospaceordash
output:
nospaceordash
input:
two words
output:
all separate words
"""
if __name__ == '__main__':
