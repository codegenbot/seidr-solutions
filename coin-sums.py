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
    pennies = 0
    nickles = 0
    dimes = 0
    quarters = 0
    while cents >= 25:
        quarters += 1
        cents -= 25
    while cents >= 10:
        dimes += 1
        cents -= 10
    while cents >= 5:
        nickles += 1
        cents -= 5
    while cents >= 1:
        pennies += 1
        cents -= 1
    pennies += cents
    print(pennies)
    print(nickles)
    print(dimes)
    print(quarters)
