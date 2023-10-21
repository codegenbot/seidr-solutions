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

def camelCase(s):
	if not s.__contains__('-'):
		return s
	else:
		letters = s.split('-')
		c = ''
		for letter in letters:
			c += (''+letter).capitalize()
		return c

def camelCase2(s):
	if not s.__contains__(' '):
		return s
	else:
		letters = s.split(' ')
		c = ''
		for letter in letters:
			c += (''+letter).capitalize()
		return c


if __name__ == '__main__':
	print(camelCase('camel-case example-test-string'))
	print(camelCase2('two words'))
