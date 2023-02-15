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
    input_list = []
    while True:
        try:
            line = input()
            input_list.append(line)
        except:
            break
    input_list = [int(x) for x in input_list]
    if len(input_list) == 2:
        print(input_list[0])
        print(input_list[1])
        print(0)
    else:
        min_diff = sys.maxsize
        min_diff_index = 0
        for i in range(1, len(input_list) - 1):
            if (abs(input_list[i] - input_list[i - 1]) < min_diff) or (abs(input_list[i] - input_list[i + 1]) < min_diff):
                min_diff = min(abs(input_list[i] - input_list[i - 1]), abs(input_list[i] - input_list[i + 1]))
                min_diff_index = i
        print(input_list[0])
        print(input_list[min_diff_index])
        print(input_list[min_diff_index + 1])
        print(input_list[-1])
        print(0)

