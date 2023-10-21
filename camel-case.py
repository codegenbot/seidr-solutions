import os
import sys
import numpy as np
import math
import re
import datetime
import string
import collections
import itertools
import queue
import random

"""
Take a string in kebab-case and convert all of the words to camelCase. Each group of words to convert is delimited by "-", and each grouping is separated by a space.
For example: "camel-case example-test-string"-> "camelCase exampleTestString".
"""

if __name__ == '__main__':
    for line in sys.stdin:
        words = line.strip().split()
        sentence = ""
        for word in words:
            if '-' in word:
                word = word.split('-')
                sentence += ''.join(word)
            else:
                sentence += word
        print(sentence)
