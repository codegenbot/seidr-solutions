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
a
5\n
output:
0\n

input:
!\n
output:
1\n0\n

input:
r\n
nm,xcnwqnd@#$fwkdjn3\n
output:
0\n

input:
hi\n
hihihihihihihihihihi\n
output:
0\n

input:
############\n
#\n
output:
12\n
0 1 2 3 4 5 6 7 8 9 10 11
"""
if __name__ == '__main__':
    text = input()
    target = input()

    for i in range(len(text)):
        if text[i:i+len(target)] == target:
            print(i,end=" ")
