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
You are given two arrays of integers and asked to determine all integers that satisfy the following two conditions:
The elements of the first array are all factors of the integer being considered
The integer being considered is a factor of all elements of the second array
These numbers are referred to as being between the two arrays. You must determine how many such numbers exist.
For example, given the arrays a = [2, 6] and b = [24, 36], there are two numbers between them: 6 and 12. 6% 2 = 0, 6% 6 = 0, 24% 6 = 0 and 36% 6 = 0 for the first value. Similarly, 12% 2 = 0, 12% 6 = 0 and 24% 12 = 0, 36% 12 = 0.
Given a = [2, 6] and b = [24, 36], find the numbers between them.
"""
if __name__ == '__main__':
    a = list(map(int, input().split(' ')))
    b = list(map(int, input().split(' ')))
    count = 0
    for i in range(max(a), min(b) + 1):
        if all(i % j == 0 for j in a) and all(j % i == 0 for j in b):
            count += 1
    print(count)
