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
def camel_case(s):
    if not s: return s
    s = s.replace("-", " ").title().replace(" ", "")
    for i in range(len(s)-1):
        if s[i].isdigit():
            s = s[:i] + s[i].upper() + s[i+1:]
    s = s[0].lower() + s[1:]
    return s
if __name__ == '__main__':
    print(camel_case("camel-case example-test-string"))
    print(camel_case("nospaceordash"))
    print(camel_case("two-words"))
    print(camel_case("two words"))
    print(camel_case("all separate words"))
