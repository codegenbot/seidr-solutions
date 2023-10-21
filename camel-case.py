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
Take a string in kebab-case and convert all of the words to camelCase. Each group of words to convert is delimited by "-", and each grouping is separated by a space. For example: "camel-case example-test-string"-> "camelCase exampleTestString". For example,

"""
if __name__ == '__main__':
    input = "camel-case example-test-string"
    words = input.split()
    output = ""
    for word in words:
        if "-" in word:
            temp = word.split("-")
            for i in range(0, len(temp)):
                if i == 0:
                    output += temp[i]
                else:
                    output += temp[i].title()
        else:
            output += word

    print(output)
