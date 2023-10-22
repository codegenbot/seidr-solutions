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
def matched_indicies(text, pattern):
    if(len(pattern) > len(text) or len(pattern) == 0):
        print("The entered pattern is not valid")
        return
    m = len(text)
    n = len(pattern)
    i = 0
    j = 0
    li = []
    while(i < m):
        if text[i] == pattern[j]: 
            i+=1
            j+=1 
        else: 
            if not j: 
                i+=1
            else: 
                li.append(i-n)
                j = 0
                i = i-n+1
        if(j == n): 
            li.append(i-n)
            j = 0
            i-n
    return li

if __name__ == '__main__':
    text = 'hi'
    pattern = 'hihihihihihihihihihi'
    print(matched_indicies(text,pattern))
