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
    line = sys.stdin.readline().strip()
    line1= sys.stdin.readline().strip()
    if(not line):
        exit(0)
    if(not line1):
        exit(0)
    s = line
    t = line1
    k = 0
    idx = []
    while k < len(s):
        k = s.find(t, k)
        if k == -1:
            break
        idx.append(k)
        k += len(t)

    for i in idx:
        sys.stdout.write(str(i))
        sys.stdout.write(' ')
    sys.stdout.write('\n')
