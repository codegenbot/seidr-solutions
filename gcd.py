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
Given two integers, return the largest integer that divides each of the integers evenly. For example,

    input:
    1
    1
    output:
    1
    input:
    4
    400000
    output:
    4
    input:
    54
    24
    output:
    6
    input:
    4200
    3528
    output:
    168
    input:
    820000
    63550
    output:
    2050
"""
a = int(input())
b = int(input())
print(a*b//math.gcd(a,b))
