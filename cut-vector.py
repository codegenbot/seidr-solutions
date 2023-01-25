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
10
0
0
input:
1
10
output:
11
0
0
input:
1
100
output:
11
0
0
input:
1
1000
output:
11
0
0
input:
1
10000
output:
11
0
0
"""
if __name__ == '__main__':
    num = int(input())
    if num == 0:
        print(10)
        print(0)
        print(0)
        exit()
    s = str(num)
    length = len(s)
    if length == 1:
        print(int(s+'0')) # 1
        print(0)
        print(0)
        exit()
    if length == 2:
        print(int(s + '0')) # 10
        print(0)
        print(0)
        exit()
    if length == 3:
        if s[0] == s[1] or s[1] == s[2] or s[0] == s[2]:
            print(int(s)) # 100
            print(0)
            print(0)
            exit()
        if s[0] == '1':
            print(int(s[0] + s[1] + s[2])) # 101
            print(0)
            print(0)
            exit()
        if s[0] == '2':
            print(int(s[0] + s[1] + s[2])) # 102
            print(0)
            print(0)
            exit()
        if s[0] == '3':
            print(int(s[0] + s[1] + s[2])) # 103
            print(0)
            print(0)
            exit()
        if s[0] == '4':
            print(int(s[0] + s[1] + s[2])) # 104
            print(0)
            print(0)
            exit()
        if s[0] == '5':
            print(int(s[0] + s[1] + s[2])) # 105
            print(0)
            print(0)
            exit()
        if s[0] == '6':
            print(int(s[0] + s[1] + s[2])) # 106
            print(0)
            print(0)
            exit()
        if s[0] == '7':
            print(int(s[0] + s[1] + s[2])) # 107
            print(0)
            print(0)
            exit()
        if s[0] == '8':
            print(int(s[0] + s[1] + s[2])) # 108
            print(0)
            print(0)
            exit()
        if s[0] == '9':
            print(int(s[0] + s[1] + s[2])) # 109
            print(0)
            print(0)
            exit()
    else:
        if s[0] == '1':
            print(int(s[0] + s[1] + s[2]))
            exit()
        if s[0] == '2':
            print(int(s[0] + s[1] + s[2]))
            exit()
        if s[0] == '3':
            print(int(s[0] + s[1] + s[2]))
            exit()
        if s[0] == '4':
            print(int(s[0] + s[1] + s[2]))
            exit()
        if s[0] == '5':
            print(int(s[0] + s[1] + s[2]))
            exit()
        if s[0] == '6':
            print(int(s[0] + s[1] + s[2]))
            exit()
        if s[0] == '7':
            print(int(s[0] + s[1] + s[2]))
            exit()
        if s[0] == '8':
            print(int(s[0] + s[1] + s[2]))
            exit()
        if s[0] == '9':
            print(int(s[0] + s[1] + s[2]))
            exit()
