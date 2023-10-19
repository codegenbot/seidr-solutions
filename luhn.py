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
Given a vector of 16 digits, implement Luhn’s algorithm to verify a credit card number, such that it follows the following rules: double every other digit starting with the second digit. If any of the results are over 9, subtract 9 from them. Return the sum of all of the new digits.
For example,
input:
16
0 1 2 3 4 5 6 7 8 9 8 7 6 5 4 3
output:
80
input:
16
9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9
output:
144
input:
16
0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
output:
0
input:
16
5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5
output:
48
input:
16
4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4
output:
96
"""
arr=raw_input()
arr=int(arr)
new_arr=[]
for i in range(arr):
    new_arr.append(raw_input())
if __name__ == '__main__':
    for x in range(new_arr[0]):
        a=new_arr[x+1]
    output_sum=0 
    for i in range(len(a)):
        if i%2 is 0 or i is 0:
            num=a[i]*2
            if num>9:
                num=num-9
            output_sum+=num
        else:
            output_sum+=int(a[i])
    print output_sum
