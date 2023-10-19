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
Given a vector of positive integers, ﬁnd the spot where, if you cut the vector, the numbers on both sides are either equal, or the diﬀerence is as small as possible. Return the two resulting subvectors as two outputs.
For example,
input:
1
0
output:
1
0
0

input:
1
10
output:
1
10
0

input:
1
100
output:
1
100
0

input:
1
1000
output:
1
1000
0

input:
1
10000
output:
1
10000
0

"""
if __name__ == '__main__':
    input_data = sys.stdin.readlines()
    input_data = list(map(int, input_data))
    i = 0
    while i < len(input_data):
        if input_data[i] == 0:
            break
        else:
            input_data = input_data[i:]
            i += 1
    input_data = input_data[:-1]
    for i in range(len(input_data)):
        if i == 0:
            print(0)
        elif i == len(input_data) - 1:
            print(0)
        else:
            if input_data[i] - input_data[i - 1] == input_data[i + 1] - input_data[i]:
                print(input_data[i])
            else:
                print(input_data[i + 1])
