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
Given a vector of positive integers, ﬁnd the spot where, if you cut the vector, the numbers on both sides are either equal, or the diﬀerence is as small as possible. Return the two resulting subvectors as two outputs.
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



def get_sub_array(a, n):
    left, right, mid = 0, n - 1, n // 2
    while left <= right:
        if a[mid] < a[left]:
            left, right = 0, mid - 1
        elif a[right] < a[mid]:
            left, right = mid + 1, n - 1
        else:
            return (left, right + 1)
        mid = (left + right) // 2

    return (0, 0)

"""
if __name__ == '__main__':
    a = [1, 2, 3, 4, 5]
    n = len(a)
    print(get_sub_array(a, n))
