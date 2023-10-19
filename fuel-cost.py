import os
import sys
# import numpy as np
# import math
# import datetime
# import collections
# import itertools
# import queue
# import re
"""
Given a vector of positive integers, divide each by 3, round the result down to the nearest integer, and subtract 2. Return the sum of all of the new integers in the vector.
For example,
input:
1
6
output:
0
input:
1
7
output:
0
input:
1
8
output:
0
input:
1
9
output:
1
input:
1
10
output:
1
"""
if __name__ == '__main__':
    params = sys.stdin.readline().strip()
    params = params.split(' ')
    params = [int(x) for x in params]
    line = input()
    line = line.split(' ')
    line = [int(x) for x in line]

    def cal(s):
        a = []
        for i, val in enumerate(s):
            x = math.floor(val/3)-2
            a.append(x)

        return sum(a)

    print(cal(line))

    # t = params[0]
    # for i in range(t):
    #     n = 2 ** i
    #     new_list = list(range(0,n))
    #     print(cal(new_list))
