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
    test = []
    for count in range(int(input("first loop: "))):
        m = input()
        test.append(m)
    for i in test:
        space = i.find(" ")
        if space == -1 and i.count("-") == 1:
            x = re.findall("(\w+)(-)(\w+)", i)
            a = ""
            for i in x:
                a = a + i[0] + i[2]
        elif space == -1 and i.count("-") > 1:
            x = re.findall("(\w+)(-)(\w+)", i)
            a = ""
            for i in x:
                if a == "":
                    a = a + i[0] + i[2].upper()
                else:
                    a = a + i[2].upper()
        elif space == 0 and i.count("-") == 1:
            x = re.findall("(\w+)(-)(\w+)", i)
            a = ""
            for i in x:
                a = i[0] + i[2]
        elif space == 0 and i.count("-") > 1:
            x = re.findall("(\w+)(-)(\w+)", i)
            a = ""
            for i in x:
                a = a + i[0] + i[2].upper()
        elif space > 0 and i.count("-") == 1:
            x = re.findall("(\w+)(-)(\w+)", i)
            a = ""
            for i in x:
                a = i[0] + i[2]
        elif space > 0 and i.count("-") > 1:
            x = re.findall("(\w+)(-)(\w+)", i)
            a = ""
            for i in x:
                a = a + i[0] + i[2].upper()
        else:
            a = i
        print(a)
