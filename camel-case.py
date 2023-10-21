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
  line = sys.stdin.readline().strip()
  words = line.split(' ')
  print words
  for i in range(0, len(words)):
    parts = words[i].split('-')
    if len(parts) > 1:
      print parts
      for j in range(1, len(parts)):
        parts[j] = parts[j][0].upper() + parts[j][1:]
      words[i] = ''.join(parts)
    else:
      words[i] = words[i]
  print ' '.join(words)
