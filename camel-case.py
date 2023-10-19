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
Take a string in kebab-case and convert all of the words to camelCase. Each group of words to convert is delimited by "-", and each grouping is separated by a space. For example: "camel-case example-test-string"-> "camelCase exampleTestString"


For example,
input:
camel-case example-test-string
output:
camelCase exampleTestString
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
    input_string = input().strip()
    if input_string == "":
        print("")
    else:
        # split the input string by space
        split_string = input_string.split(" ")
        # loop through the split string by space
        for i in range(len(split_string)):
            # split the string by -
            split_string_by_dash = split_string[i].split("-")
            # loop through the split string by -
            for j in range(len(split_string_by_dash)):
                # if j == 0
                if j == 0:
                    # concatenate the first word with the second word
                    split_string_by_dash[j] = split_string_by_dash[j] + split_string_by_dash[j + 1]
                    # remove the second word
                    split_string_by_dash.remove(split_string_by_dash[j + 1])
                # else
                else:
                    # concatenate the first word with the second word
                    split_string_by_dash[j] = split_string_by_dash[j] + split_string_by_dash[j + 1]
                    # remove the second word
                    split_string_by_dash.remove(split_string_by_dash[j + 1])
            # join the split string by -
            split_string[i] = "".join(split_string_by_dash)
        # join the split string by space
        print(" ".join(split_string))
