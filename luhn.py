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
Given a vector of 16 digits, implement Luhn’s algorithm to verify a credit card number, such that it follows the following rules: double every other digit starting with the second digit. If any of the results are over 9, subtract 9 from them. Return the sum of all of the new digits.
For example,
input:
16
0 1 2 3 4 5 6 7 8 9 8 7 6 5 4 3
output:
80
input:
16
9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9
output:
144
input:
16
0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
output:
0
input:
16
5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5
output:
48
input:
16
4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4
output:
96
"""
def digital_sum(num):
    res = 0
    while num > 0:
        res += num % 10
        num = num // 10
    return res

def luhn(inp):
    number = list(map(int, inp.split(" ")))
    number = number[::-1]
    return sum([(num if idx % 2 == 0 else digital_sum(num * 2)) for idx, num in enumerate(number)])

if __name__ == '__main__':
