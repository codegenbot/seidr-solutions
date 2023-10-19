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
    num = int(input())
    if num == 1:
        print(1, end='\n')
        print(0, end='\n')
    elif num == 2:
        print(2, end='\n')
        print(1, end='\n')
    elif num > 2:
        if num % 2 == 0:
            print(num, end='\n')
            print(num // 2, end='\n')
        else:
            print(num, end='\n')
            print(num // 2 + 1, end='\n')
