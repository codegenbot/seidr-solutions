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
Given a vector of positive integers, ﬁnd the spot where, if you cut the vector, the numbers on both sides are either equal,
or the diﬀerence is as small as possible. Return the two resulting subvectors as two outputs.
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
    # input = sys.stdin.read()
    # data = list(map(int, input.split()))
    data = [1, 0]
    print(data)
    if len(data) <= 1:
        print(data)
        print(data)
        sys.exit(0)
    for i in range(len(data)):
        if i == 0:
            continue
        if data[i] == data[i - 1]:
            print(data[:i])
            print(data[i:])
            sys.exit(0)
    for i in range(len(data)):
        if i == 0:
            continue
        if data[i] - data[i - 1] == 1:
            print(data[:i])
            print(data[i:])
            sys.exit(0)
    for i in range(len(data)):
        if i == 0:
            continue
        if data[i - 1] - data[i] == 1:
            print(data[:i])
            print(data[i:])
            sys.exit(0)
    for i in range(len(data)):
        if i == 0:
            continue
        if data[i] - data[i - 1] == 2:
            print(data[:i])
            print(data[i:])
            sys.exit(0)
    for i in range(len(data)):
        if i == 0:
            continue
        if data[i - 1] - data[i] == 2:
            print(data[:i])
            print(data[i:])
            sys.exit(0)
    for i in range(len(data)):
        if i == 0:
            continue
        if data[i] - data[i - 1] == 3:
            print(data[:i])
            print(data[i:])
            sys.exit(0)
    for i in range(len(data)):
        if i == 0:
            continue
        if data[i - 1] - data[i] == 3:
            print(data[:i])
            print(data[i:])
            sys.exit(0)
    for i in range(len(data)):
        if i == 0:
            continue
        if data[i] - data[i - 1] == 4:
            print(data[:i])
            print(data[i:])
            sys.exit(0)
    for i in range(len(data)):
        if i == 0:
            continue
        if data[i - 1] - data[i] == 4:
            print(data[:i])
            print(data[i:])
            sys.exit(0)
    for i in range(len(data)):
        if i == 0:
            continue
        if data[i] - data[i - 1] == 5:
            print(data[:i])
            print(data[i:])
            sys.exit(0)
    for i in range(len(data)):
        if i == 0:
            continue
        if data[i - 1] - data[i] == 5:
            print(data[:i])
            print(data[i:])
            sys.exit(0)
    for i in range(len(data)):
        if i == 0:
            continue
        if data[i] - data[i - 1] == 6:
            print(data[:i])
            print(data[i:])
            sys.exit(0)
    for i in range(len(data)):
        if i == 0:
            continue
        if data[i - 1] - data[i] == 6:
            print(data[:i])
            print(data[i:])
            sys.exit(0)
    for i in range(len(data)):
        if i == 0:
            continue
        if data[i] - data[i - 1] == 7:
            print(data[:i])
            print(data[i:])
            sys.exit(0)
    for i in range(len(data)):
        if i == 0:
            continue
        if data[i - 1] - data[i] == 7:
            print(data[:i])
            print(data[i:])
            sys.exit(0)
    for i in range(len(data)):
        if i == 0:
            continue
        if data[i] - data[i - 1] == 8:
            print(data[:i])
            print(data[i:])
            sys.exit(0)
    for i in range(len(data)):
        if i == 0:
            continue
        if data[i - 1] - data[i] == 8:
            print(data[:i])
            print(data[i:])
            sys.exit(0)
    for i in range(len(data)):
        if i == 0:
            continue
        if data[i] - data[i - 1] == 9:
            print(data[:i])
            print(data[i:])
            sys.exit(0)
    for i in range(len(data)):
        if i == 0:
            continue
        if data[i - 1] - data[i] == 9:
            print(data[:i])
            print(data[i:])
            sys.exit(0)
