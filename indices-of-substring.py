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
    print(sys.argv[1:])
    print(type(sys.argv[1]))
    print(sys.argv[1].__len__())
    if sys.argv[2].__len__()<1:
        print("-1")
    else:
        source=sys.argv[1]
        target=sys.argv[2]
        if target.__len__()>source.__len__():
            print("-1")
        else:
            for i in range(0,source.__len__()-target.__len__()+1):
                print(i)
                if target==source[i:i+target.__len__()]:
                    print(i,end=" ")
            print("-1")
