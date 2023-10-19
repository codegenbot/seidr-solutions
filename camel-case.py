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
    s = input()
    s = s.split(" ")
    print(s)
    print("^^^ This is the array to modify.")
    for i in range(len(s)):
        print(s[i])
        print("^^^ This is the string in the array to modify.")
        s[i] = s[i].split("-")
        print(s[i])
        print("^^^ This is the array of strings in the array to modify.")
        for j in range(len(s[i])):
            if s[i][j]:
                if j == 0:
                    s[i][j] = s[i][j].lower()
                else:
                    s[i][j] = s[i][j].capitalize()
            print(s[i][j])
            print("^^^ This was the string in the array of strings in the array to modify.")
        print(s[i])
        print("^^^ This is the array of strings in the array that was modified.")
        s[i] = "".join(s[i])
    s = " ".join(s)
    print(s)
