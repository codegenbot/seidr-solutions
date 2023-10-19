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

if __name__ == '__main__':
    T = int(input())  # number of test cases
    lines = []  # remains lines after removing comments
    for line in sys.stdin:
        lines.append(line)
    # because remaining lines will not have any comments or empty lines
    test_cases = []
    # splitting test cases by line
    for i in lines:
        if i is not '\n':
            temp = i.split()
            temp = map(int,temp)
            cnt = 0
            for j in temp[::-1]:
                if temp[len(temp) - 1 - cnt]>max(temp[:-(len(temp) - (len(temp) - 1 - cnt)):]):
                    print(temp[len(temp) - 1 - cnt]," ", end="")
                cnt = cnt + 1
