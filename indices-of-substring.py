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
Given a text string and a target string, return a list of integers of the indices at which the target appears in the text. Targets may overlap.
For example,
input:
"abcdef"
"cde"
output:
0
input:
"abcdef"
"abc"
output:
0 3
input:
"abcdef"
"def"
output:
3
input: hi hihihihihihihihihihi
output: 0
input: ############ #
output: 12 0 1 2 3 4 5 6 7 8 9 10 11
"""
if __name__ == '__main__':
