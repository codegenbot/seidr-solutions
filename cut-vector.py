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
100
input:
1
10
output:
1100
input:
1
100
output:
11000
input:
1
1000
output:
110000
input:
1
10000
output:
1100000
"""
if __name__ == '__main__':
    num = int(input())
    ans = []
    if num == 0:
        print(0)
    else:
        while num != 0:
            ans.append(num % 10)
            num = num // 10
        ans.reverse()
        print(ans)
        a = ''
        b = ''
        for i in range(len(ans)):
            if ans[i] == 0:
                a += '0'
                b += '0'
            elif ans[i] == 1:
                a += '1'
                b += '0'
            else:
                a += '1'
                b += '1'
        print(a)
        print(b)
