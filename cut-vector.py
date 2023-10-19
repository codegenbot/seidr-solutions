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

input:
1
0
output:
1
0
0

"""
if __name__ == '__main__':
    input = []
    for line in sys.stdin:
        line = line.strip('\n')
        input.append(line)
    #print(input)
    #print(len(input))
    input = list(map(int,input))
    #print(input)
    #print(len(input))
    #print(type(input))
    #print(type(input[0]))
    #print(type(input[1]))
    #print(type(input[2]))
    #print(type(input[3]))
    #print(type(input[4]))

    min_diff = input[1] - input[0]
    print(input[0])
    print(input[1])

    if(len(input) == 2):
        print(input[1])
        print(0)
        print(input[1])
        exit()

    print(0)
    for i in range(2,len(input)):
        if(input[i] - input[i-1] < min_diff):
            min_diff = input[i] - input[i-1]
            print(input[i-1])
            print(input[i])
            print(0)
        else:
            print(input[i])
            print(0)
            print(input[i])
            break
