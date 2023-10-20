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
Given a list of integers, return the largest product that can be made by multiplying any three integers.
For example, if the list is [-10, -10, 5, 2], we should return 500, since that's -10 * -10 * 5.
You can assume the list has at least three integers.
"""
if __name__ == '__main__':
    a = [-10, -10, 5, 2]
    a.sort()
    print(a)
    print(a[-1] * a[-2] * a[-3])
