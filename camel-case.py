import os
import sys
import numpy as np
import math
import datetime
import collections
import itertools
import queue
import re
import time
import random
import string
import pdb

"""
Take a string in kebab-case and convert all of the words to camelCase. Each group of words to convert is delimited by "-", and each grouping is separated by a space. For example: "camel-case example-test-string"-> "camelCase exampleTestString".
For example,
input:
camel-case example-test-string
output:
camelCase exampleTestString

"""
if __name__ == '__main__':
    inp = input('Enter the string: ')
    inp.split('-')
    print(inp)
