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

"""
if __name__ == '__main__':
    k = 0
    num_list = []

    for k in range(10000):
        num_list.append(k)

    def equalssplit(num_list):
        """
        :param num_list:
        :return: max_diff, split
        """
        length = len(num_list)
        s = [sum(num_list[:i+1]) for i in range(length)]
        # We are looking for the minimum difference inside two pieces s[i+1] - s[i].
        def find(i, j, split): # [i,j) is the current subarray under consideration.
            if j == i:
                return None
            if j-i == 1:
                return abs(split - 2*s[i])
            if j-i == 2:
                return min(abs(split - 2*s[i]), abs(split - 2*s[j-1]))
            mid = float(i+j)/2
            left = find(i, mid, s[i], split)
            right = find(mid, j, s[-1]-s[mid], split)
            return min(left, right)
        split = s[-1]
        maxdiff = find(0, length, split)
        return maxdiff, split
    return equalssplit(num_list)
