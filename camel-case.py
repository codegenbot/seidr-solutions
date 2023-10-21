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

    string = ' '
    final=''

    while string:
        string = input().split()
        for i in range(len(string)):

            if '-' in string[i]:
                string[i] = string[i].split('-')
                final +=string[i][0]

                for j in range(1, len(string[i])):

                    final += string[i][j][0].upper()
                    final += string[i][j][1:]
                    final += ' '

            elif ' ' in string[i]:

                string[i] = string[i].split()

                for g in string[i]:
                    final += g
                final += ''

            else:
                final += string[i]
                final += ' '

        print(final[:len(final)-1])
        final = ''
