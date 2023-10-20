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
    cents = 0
    p = 0
    n = 0
    d = 0
    q = 0
    cents = int(input())
    p = cents
    if(cents>=5):
        n = cents//5
        cents = cents%5
    if(cents>=10):
        d = cents//10
        cents = cents%10
    if(cents>=25):
        q = cents//25
        cents = cents%25
    print(p)
    print(n)
    print(d)
    print(q)
