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
Given a vector of integers, return the two elements that sum to a target integer.
For example,
input:
2
5 7
12
output:
5
7
input:
2
2500 6352
8852
output:
2500
6352
input:
2
-14 5
-9
output:
-14
5
input:
2
40 -19
21
output:
40
-19
input:
2
-4 4
0
output:
-4
4
"""
if __name__ == '__main__':
    file = open(sys.argv[1], 'r')
    for line in file:
        line = line.rstrip()
        if line:
            line = line.split(' ')
            line = [int(x) for x in line]
            target = line[-1]
            line = line[:-1]
            line.sort()
            start = 0
            end = len(line) - 1
            while start < end:
                if line[start] + line[end] == target:
                    print(line[start], line[end])
                    break
                elif line[start] + line[end] > target:
                    end -= 1
                else:
                    start += 1
    file.close()
