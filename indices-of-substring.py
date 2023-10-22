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
Given 2 integers x and n, where n>x, print the difference between the sum of squares of the first n natural numbers and the square of the sum.
(Source: XKCD)
input:
5
5
output:
170

input:
10
10
output:
2640

input:
50
100
output:
1582700

input:
200
1000
output:
25164150

input:
1000000
2000000
output:
249975000025000000
"""
if __name__ == '__main__':
    sys.stdin = open('input.txt')
    while True:
        N = map(int, raw_input().strip().split())
        if N == [0, 0]:
            break
        x, n = N
        sum_number1, sum_number2 = n*(n+1)/2, n*(n+1)*(2*n + 1)/6
        res = sum_number1**2 - sum_number2
        print res
