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
    while True:
        try:
            line = input()
            line2 = input()
            if line == '':
                break
            if line2 == '':
                break
            res = []
            line_len = len(line)
            line2_len = len(line2)
            for i in range(line_len - line2_len + 1):
                if line[i:i + line2_len] == line2:
                    res.append(i)
            print(*res)
        except:
            break
