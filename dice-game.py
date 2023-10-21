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
Peter has an n-sided die and Colin has an m-sided die. If they both roll their dice at the same time, return the probability that Peter rolls strictly higher than Colin.
For example,
input:
1
2
output:
0.0
input:
2
1
output:
0.5
input:
99
100
output:
0.49
input:
100
99
output:
0.5
input:
1
100
output:
0.0
"""

def Peter_wins(n,m):
    peter_win=0
    peter_los=0
    for x in range(1,n+1):
        for colin in range(1,m+1):
            if x>colin:
                peter_win+=1
            else:
                peter_los+=1
    return peter_win*1.0/(peter_win+peter_los)


if __name__ == '__main__':
    input_list=[]
    n=input()
    input_list.append(n)
    m=input()
    input_list.append(m)
    print(Peter_wins(int(input_list[0]),int(input_list[1])))
