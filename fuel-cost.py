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
2
12
output:
2
input:
2
14
output:
2
input:
2
1969
output:
654
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
    n = int(input())
    for i in range(n):
        x = int(input().split()[0])
        print(max(x//3-2,0)*(x//3-2>=0)+(x//3-2==0)*(x//3-2!=1)*(x//3-2!=0))
