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
Given a text string and a target string, return a list of integers of the indices at which the target appears in the text.
Targets may overlap.
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
    text = input()
    target = input()
    length = len(target)
    count = 0
    res = []
    for i in range(len(text)):
        if text[i] == target[count]:
            count += 1
            if count == length:
                res.append(i+1-count)
                count = 0
        else:
            count = 0
    res = [str(i) for i in res]
    print(' '.join(res))
