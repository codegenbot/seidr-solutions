import os
import sys
import numpy as np
import math
import datetime
import collections
import itertools
import re
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
def convert(str):
	if str.find("-") >= 0:
		l = [st.capitalize() for st in str.split("-")]
		ret = ''.join(l)
		return ret[0].lower() + ret[1:]
	elif str.find(" ") >= 0:
		l = [st.lower() for st in str.split(" ")]
		return " ".join(l)
	else:
		return str.lower()

if __name__ == '__main__':
     # for line in sys.stdin:
     # 	line = line.strip()
     # 	str = line.split(' ')

     inp = input('please input the string')
     print(convert(inp))

