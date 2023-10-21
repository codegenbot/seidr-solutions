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
    out = ""
    words = s.split(" ")
    sp = False
    for word in words:
        k = word
        word = list(k)
        for i in range(1, len(k)):
            if word[i-1] != "-" and word[i] == "-":
                word[i] = word[i].upper()
        word = "".join(word)
        word = re.sub("-","", word)
        if sp:
            out = out + " " + word
        else:
            out += word
        sp = True
    return out

print(camel_case("camel-case example-test-string"))
