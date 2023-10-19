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

def kebab_to_camel(str):
    output_str = ""
    temp_str = ""
    for i,char_i in enumerate(str):
        if str[i] == '-':
            output_str = output_str + temp_str
            output_str.append(temp_str)
            temp_str = ""
        elif str[i] != ' ':
            if char_i.isupper():
                char_i.append
            output_str.append(temp_str)
            temp_str = ""
        else:
            if i == 0:
                output_str = output_str + char_i + "{upper}"
            else:
                output_str = output_str + char_i.upper() + "{upper}" 
            
                
    return output_str

    


if __name__ == '__main__':
