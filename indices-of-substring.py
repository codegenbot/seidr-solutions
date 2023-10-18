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
Given a text string and a target string, return a list of integers of the indices at which the target appears in the text. Targets may overlap.
For example,
input:
a
5
output:
0

input:
!
!
output:
1
0
input:
r
nm,xcnwqnd@#$fwkdjn3
output:
0

input:
hi
hihihihihihihihihihi
output:
0

input:
############
#
output:
12
0 1 2 3 4 5 6 7 8 9 10 11
"""
if __name__ == '__main__':
    ###########
    #输入文本
    ###########
    text = input()
    ###########
    #输入目标
    ###########
    target = input()
    ###########
    #查找目标
    ###########
    pos = text.find(target)
    ###########
    #打印结果
    ###########
    while pos != -1:
        print(pos, end=" ")
        pos = text.find(target, pos + 1)
    print()
