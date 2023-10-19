import os
import sys
import numpy as np
import math
import datetime
import collections
import itertools
import queue
import re
import pprint


"""
Given a text string and a target string, return a list of integers of the indices at which the target appears in the text. Targets may overlap.
For example,
input:
a
5
output:
0

input:
!
!
output:
1
0
input:
r
nm,xcnwqnd@#$fwkdjn3
output:
0

input:
hi
hihihihihihihihihihi
output:
0

input:
############
#
output:
12
0 1 2 3 4 5 6 7 8 9 10 11
"""


def find_indexes(text, target):
    return [match.start() for match in re.finditer(target, text)]


if __name__ == '__main__':
    text = raw_input()
    target = raw_input()
    result = find_indexes(text, target)
    for i in result:
        print i,
