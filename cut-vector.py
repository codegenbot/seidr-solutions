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

def compute_cut(inputlist):
    output = []
    if len(inputlist) == 1:
        return output
    for i in range(len(inputlist)):
        if i == 0:
            left = [x for x in inputlist[:] if x <= inputlist[i+1]]
            right = [x for x in inputlist[:] if x > inputlist[i+1]]
        elif i == len(inputlist)-1:
            left = [x for x in inputlist[:] if x <= inputlist[i]]
            right = [x for x in inputlist[:] if x > inputlist[i]]
        else:
            left = [x for x in inputlist[:] if x <= inputlist[i]]
            right = [x for x in inputlist[:] if x > inputlist[i]]
        if len(left) == 0 or len(right) == 0:
            continue
        left_max = max(left)
        right_min = min(right)
        diff = min(abs(left_max-right_min), abs(right_min-left_max))
        if diff != 0:
            output.append(left_max)
            output.append(right_min)
            output.append(diff)
            return output
    return output
if __name__ == '__main__':
    inputlist = [2,1,129]
    if len(inputlist) == 1:
        print(0)
        print(0)
        print(0)
    else:
        output = compute_cut(inputlist)
        if len(output) != 0:
            print(output[0])
            print(output[1])
            print(output[2])
        else:
            print(inputlist[0])
            print(inputlist[-1])
            print(0)
