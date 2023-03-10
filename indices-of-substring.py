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
if __name__ == '__main__':
    f = open("file.txt", "r")
    text = f.readline()
    target = f.readline()
    f.close()
    if len(text) < len(target):
        print("Error: target is longer than text")
        sys.exit()
    if len(text) == len(target):
        if text == target:
            print("0")
        else:
            print("Error: target is not in text")
            sys.exit()
    if len(text) > len(target):
        if text.find(target) == -1:
            print("Error: target is not in text")
            sys.exit()
        else:
            indices = []
            for i in range(len(text)):
                if text[i:i+len(target)] == target:
                    indices.append(i)
            print(*indices)
