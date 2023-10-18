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
    cents = int(input())
    if cents < 5:
        print(cents)
        print(0)
        print(0)
        print(0)
    elif cents >= 5 and cents < 10:
        print(cents-5)
        print(1)
        print(0)
        print(0)
    elif cents >= 10 and cents < 25:
        print(cents-10)
        print(0)
        print(1)
        print(0)
    elif cents >= 25:
        print(cents-25)
        print(0)
        print(0)
        print(1)
