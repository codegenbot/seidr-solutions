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
Given a vector of positive integers, return a vector of the leaders in that vector. A leader is deﬁned as a number that is greater than or equal to all the numbers tothe right of it. The rightmost element is always a leader.
For example,
input:
0

output:
0
input:
1
0
output:
10
input:
1
451
output:
1451
input:
2
1000 0
output:
21000 0
input:
2
0 1000
output:
11000
"""
if __name__ == '__main__':

   for line in sys.stdin.readlines():

       line = line.rstrip()
       input_list = line.split(' ')
       
       leaders_list = []

       #Iterating through a list backwards
       
       for x in input_list[::-1]:
            x = int(x)

           #Assumption: input list is non empty
           
            if not leaders_list:
                leaders_list.append(x)

           #Check if x is greater than items in the leaders list
           
            elif x >= leaders_list[-1]:
                leaders_list.append(x)

       leaders = " ".join(str(leader) for leader in leaders_list[::-1])
       print(leaders)



