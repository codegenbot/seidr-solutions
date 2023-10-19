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
    with open('input.txt', 'r') as f:
        data = f.readlines()
        for line in data:
            line = line.strip()
            if not line:
                continue
            line = line.split(' ')
            num = int(line[0])
            line = line[1:]
            target = int(line[-1])
            line = line[:-1]
            line = [int(i) for i in line]
            dict = {}
            for i in line:
                if i in dict:
                    print i, dict[i]
                    break
                else:
                    dict[target - i] = i
