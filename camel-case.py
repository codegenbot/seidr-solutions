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
    num=int(input())
    for i in range(num):
        line=input()
        line=line.split(" ")
        for word in line:
            word=word.split("-")
            for i in range(len(word)):
                if i==0:
                    word[i]=word[i].lower()
                else:
                    word[i]=word[i].capitalize()
            print("".join(word),end="")
        print()
