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
2
2
output:
1
2
1
2

input:
2
2 129
output:
1
2
1
129

input:
2
2 129 129
output:
1
2
1
129

input:
2
2 129 129 129
output:
1
2
1
129

input:
2
2 129 129 129 129
output:
1
2
1
129

"""
if __name__ == '__main__':
    n = int(input())
    if n >=2 and n<=10000:
        l = list(map(int,input().split()))
        l1 = l[:len(l)//2]
        l2 = l[len(l)//2:]
        print(len(l1))
        print(" ".join(map(str,l1)))
        print(len(l2))
        print(" ".join(map(str,l2)))
