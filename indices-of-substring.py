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
    with open('input.txt') as f:
        lines = f.read().strip().splitlines()
        text = lines[0]
        target = lines[1]
        l = []
        for i in range(len(text)):
            if text[i:i+len(target)] == target:
                l.append(i)
        print(' '.join([str(i) for i in l]))
