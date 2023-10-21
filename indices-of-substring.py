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
    t = input()
    p = input()
    n = len(t)
    m = len(p)
    if n < m:
        print("none")
        sys.exit()
        
    nToInt = {'a': 0, 'c': 1, 'g': 2, 't': 3}    
    tHash = np.zeros(n-m+1, dtype=np.int)
    pHash = np.zeros(m, dtype=np.int)
    
    for i in range(m):
        pHash[i] = nToInt[p[i]]
    for i in range(n-m+1):
        tHash[i] = nToInt[t[i]]
        
    base = 4
    for i in range(1, m):
        pHash[i] = (pHash[i] + pHash[i-1] * base)
        tHash[i] = (tHash[i] + tHash[i-1] * base)
        
    res = []
    for i in range(n-m+1):
        if pHash[m-1] == tHash[i+m-1]:
            if pHash[0:m-1].tolist() == tHash[i:i+m-1].tolist():
                res.append(i)
                
    for i in range(n-m+1):
        tHash[i] = (tHash[i] - tHash[i] // 4) // base
        
    for i in range(n-m+1):
        if pHash[m-1] == tHash[i+m-1]:
            if pHash[0:m-1].tolist() == tHash[i:i+m-1].tolist():
                res.append(i)
                
    if len(res) == 0:
        print("none")
    else:
        for i in res:
            print(i, end = ' ')
