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
Given a number of cents, ﬁnd the fewest number of US coins (pennies, nickles, dimes, quarters) needed to make that amount, and return the number of each type of coin as a separate output.
For example,
input:
1
output:
1
0
0
0
input:
2
output:
2
0
0
0
input:
3
output:
3
0
0
0
input:
4
output:
4
0
0
0
input:
5
output:
0
1
0
0
"""
if __name__ == '__main__':
    a=input()
    a=int(a)
    b=a//25
    a=a%25
    c=a//10
    a=a%10
    d=a//5
    a=a%5
    e=a
    print(e)
    print(d)
    print(c)
    print(b)
