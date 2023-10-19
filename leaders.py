import os
import sys
import numpy as np
import math
import datetime
import collections
import itertools
import queue
import re
import copy
"""
Given a vector of positive integers, return a vector of the leaders in that vector. A leader is deﬁned as a number that is greater than or equal to all the numbers tothe right of it. The rightmost element is always a leader.
For example,
input:
0

output:
0

input:
1
0
output:
1
0
input:
1
451
output:
1
451
input:
2
1000 0
output:
2
1000 0
input:
2
0 1000
output:
1
1000
"""

def splitarray(n, a):
    if n == 1:
        out = []
    else:
        leaderarray = []
        for i, v in enumerate(a):
            if v >= max(a[i+1:]):
                leaderarray.append(v)
        out = leaderarray
    return out

def getinput(path):
    with open(path) as fip:
        out = [int(token) for token in re.findall(r"[0-9]+", fip.read())]
    return out

def main(path):
    # input
    array = getinput(path)
    
    # compuation
    out = splitarray(len(array), array)
    out = map(str, out)
    sys.stdout.write(' '.join(out))
    return True

if __name__ == '__main__':
    #path = "H:\git\Data\Output.txt"
    path = os.path.split(__file__)
    sys.path.append(path[0])
    main(path[1])
