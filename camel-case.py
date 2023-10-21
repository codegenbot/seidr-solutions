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
	a = input()
	b = a.split()
	print(b)
	b = np.array(b)
	for i in range(len(b)):
		print(b[i])
		if('-' in b[i]):
			c = b[i].split('-')
			print(c)
			c = np.array(c)
			for j in range(len(c)):
				c[j] = c[j].capitalize()
			c = str(c)
			c = c.replace("'","")
			c = c.replace(",","")
			c = c.replace(" ","")
			b[i] = c
		else:
			b[i] = b[i].capitalize()
	b = str(b)
	b = b.replace("'","")
	b = b.replace(",","")
	b = b.replace(" ","")
	print(b)
