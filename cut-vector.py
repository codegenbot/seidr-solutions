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
Given a list of numbers, split the list into two sublists - one for the ﬁrst half, and one for the second half of the list. If the list contains an odd number of elements, the extra number should be part of the ﬁrst half of the list.
For example, given the list [1, 2, 3, 4, 5], you should return [[1, 2, 3], [4, 5]].
input: 3
6356 6368 1775
output: 1
6356
2
6368 1775
"""
if __name__ == '__main__':
    n = int(input())
    nums = list(map(int, input().split()))
    if n % 2 == 0:
        print(n // 2)
        print(*nums[:n // 2])
        print(n // 2)
        print(*nums[n // 2:])
    else:
        print(n // 2 + 1)
        print(*nums[:n // 2 + 1])
        print(n // 2)
        print(*nums[n // 2 + 1:])
