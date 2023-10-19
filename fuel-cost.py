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
Given a vector of positive integers, divide each by 3, round the result down to the nearest integer, and subtract 2. Return the sum of all of the new integers in the vector.
For example,
input:
1
6
output:
0
input:
1
7
output:
0
input:
1
8
output:
0
input:
1
9
output:
1
input:
1
10
output:
1
"""
if __name__ == '__main__':
n=int(input())
a=input().split()
arr=[]
for i in range(n):
    arr.append(int(a[i]))
sum=0
for z in range(len(arr)):
    i = arr[z]

    if i> 10:
        while (i>0):
            i=i//3-2
            # print("i inside while loop is ",i)
            sum+=i
print(sum)
