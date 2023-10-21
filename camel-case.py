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
input: camel-case example-test-string

output: camelCase exampleTestString

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


def camelCase(input):
    input = input.split(' ')
    words = []
    for word in input:
        if '-' in word:
            word = word.split('-')
            word = map(lambda x: x.capitalize(), word)
            word = ''.join(word)
            words.append(word)
        else:
            words.append(word)
    return ' '.join(words)


if __name__ == '__main__':
    print(camelCase('camel-case example-test-string'))
    print(camelCase('nospaceordash'))
    print(camelCase('two-words'))
    print(camelCase('two words'))
    print(camelCase('all separate words'))
