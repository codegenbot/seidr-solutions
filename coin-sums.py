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
100
output:
0 0 1 0
input:
101
output:
1 0 0 1
input:
102
output:
1 1 0 0
input:
103
output:
1 1 0 1
input:
104
output:
1 1 1 0
input:
105
output:
1 1 1 1
"""
if __name__ == '__main__':
    input_num = int(input())
    quarters = input_num // 25
    input_num -= quarters * 25
    dimes = input_num // 10
    input_num -= dimes * 10
    nickles = input_num // 5
    input_num -= nickles * 5
    pennies = input_num
    print(pennies)
    print(nickles)
    print(dimes)
    print(quarters)
