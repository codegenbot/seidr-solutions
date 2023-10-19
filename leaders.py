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
Given a vector of positive integers, return a vector of the leaders in that vector. A leader is deﬁned as a number that is greater than or equal to all the numbers tothe right of it. The rightmost element is always a leader. For example,
"""
if __name__ == '__main__':
    a = int(input())
    for _ in range(a):
        b = int(input())
        if b == 0:
            print(0)
            continue
        c = list(map(int, input().split()))
        print(c)
