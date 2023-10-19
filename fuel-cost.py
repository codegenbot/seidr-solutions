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
    T = int(input())
    while(T):
        N = int(input())
        A = [int(x) for x in input().split()]
        sum = 0
        for i in range(N):
            sum += math.floor(A[i]/3) - 2
        print(sum)
        T -= 1
