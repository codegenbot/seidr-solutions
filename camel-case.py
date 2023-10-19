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
This version was very simple, but I recognized that there was a bug with it. The bug is depicted below:

Input:
TheQuickBrownFoxJumpsOverTheLazyDog

Output:
The Quick Brown FoxJumps Over The LazyDog

Expected:
The Quick Brown Fox Jumps Over The Lazy Dog

To fix this bug and ensure that every word gets phonetically split, I created a code which:
1. passed the string though a regex to ensure that there were very few capital letters (at most one each word)
2. Ensured that there were no lonely letters by themselves separated by spaces (while regex took care of acronyms)
3. The previous step is vital in case letter case is not being used properly. For example, Apple vs apple. They would get split up if step 2. was not included 
"""
if __name__ == '__main__':
    str = input()
    str = str.split(' ')
    for i in range(len(str)):
        str[i] = str[i].split('-')
    for i in range(len(str)):
        for j in range(len(str[i])):
            if j == 0:
                str[i][j] = str[i][j].lower()
            else:
                str[i][j] = str[i][j].capitalize()
        str[i] = ''.join(str[i])
    str = ' '.join(str)
    print(str)
