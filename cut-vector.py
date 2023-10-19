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
    arr = [0] * num
    low, big = 0, 0
    for i in range(num):
        k = int(input())
        arr[i] = k
    newarr = sorted(arr)
    low = min(low, newarr[1] - newarr[0])
    big = max(big, newarr[len(newarr) - 1] - newarr[len(newarr) - 2])
    if big>low*2:
        big = low
    print(low)
    print(big)






# if __name__ == '__main__':
#     num = int(input())
#     if num == 1:
#         print(1)
#         print(0)
#     elif num == 2:
#         print(2)
#         print(1)
#     elif num > 2:
#         if num % 2 == 0:
#             print(num)
#             print(num // 2)
#         else:
#             print(num)
#             print(num // 2 + 1)
