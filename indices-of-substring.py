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
abc
b
output:
1
input:
abababababa
bab
output:
1 2 3 4 5 6 7 8
input: abc
def
output:
-1
"""
if __name__ == '__main__':
    text = sys.stdin.readline().strip()
    target = sys.stdin.readline().strip()
    res = []
    for i in range(len(text)):
        if text[i]==target[0]:
            for j in range(len(target)):
                if text[i+j]!=target[j]:
                    break
                if j==len(target)-1:
                    res.append(i)
    if len(res)==0:
        print(-1)
    else:
        for j in range(len(res)-1):
            print(res[j],end=" ")
        print(res[-1])
