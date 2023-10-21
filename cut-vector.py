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
    n = int(input())
    output1 = []
    output2 = []
    for i in range(n):
        num = int(input())
        if num == 1:
            output1.append(1)
        else:
            output1.append(1)
            output2.append(num - 1)
    if output2:
        print(len(output1))
        for i in output1:
            print(i)
        print(len(output2))
        for i in output2:
            print(i)
    else:
        print(len(output1))
        for i in output1:
            print(i)
        print(0)
