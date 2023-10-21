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


    def kebabize(string):
        # your code here
        if len(string)==0:
            return string
        words=string.split(" ")
        result=[]
        for word in words:
            word=word.replace("-","")
            word=word.title()
            word=word.replace(" ","")
            word=word[0].lower()+word[1:]
            result.append(word)
        return " ".join(result)

    print(kebabize(input()))
