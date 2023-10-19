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
if __name__ == '__main__':
    n=int(input())
    m=int(input())
    if n>m:
        print('1.0')
    elif n==m:
        print('0.5')
    else:
        num=(m-n+1)/m
        tmp=enumerate(list(map(lambda x:m+1+n-2*x+1,range(1,n))))
        requestl=[i for i in tmp if i[1]>0]
        denominator=0
        if n-1==m:
            denominator=1
        elif requestl:
            for i in requestl:
                denominator+=(math.factorial(n-1)*math.factorial(m))/(math.factorial(i[0]+1)*math.factorial(m-2-i[0]))
        else:
            denominator+=(math.factorial(n-1)*math.factorial(m))/(math.factorial(n-1)*math.factorial(m-2*n+1))
        print('{:.2f}'.format(num/denominator))
