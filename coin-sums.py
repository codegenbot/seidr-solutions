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

    cents = [1, 5, 10, 25]
    num = int(input())
    res = [0, 0, 0, 0]
    for i in range(len(cents)):
        res[i] = num // cents[i]
        num = num % cents[i]
    print(res)
