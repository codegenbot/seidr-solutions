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

input: nospaceordash
output: nospaceordash
input: two-words
output: twoWords
input: two words
output: two words
input: all separate words
output: all separate words
"""
if __name__ == '__main__':
    input = 'camel-case example-test-string'
    output = ''
    for word in input.split():
        if '-' in word:
            output += word.split('-')[0]
            for i in range(1, len(word.split('-'))):
                output += word.split('-')[i].capitalize()
        else:
            output += word
        output += ' '
    print(output)
