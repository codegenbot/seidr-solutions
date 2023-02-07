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
6
output:
1
input:
1
output:
1
input:
0
output:
0
input:

"""
if __name__ == '__main__':
    cents = int(input())
    if cents >= 25:
        quarters = cents // 25
        dimes = (cents - quarters * 25) // 10
        nickles = (cents - quarters * 25 - dimes * 10) // 5
        pennies = (cents - quarters * 25 - dimes * 10 - nickles * 5)
        print(quarters)
        print(dimes)
        print(nickles)
        print(pennies)
    elif cents >= 10:
        dimes = cents // 10
        nickles = (cents - dimes * 10) // 5
        pennies = (cents - dimes * 10 - nickles * 5)
        print(dimes)
        print(nickles)
        print(pennies)
    elif cents >= 5:
        nickles = cents // 5
        pennies = (cents - nickles * 5)
        print(nickles)
        print(pennies)
    else:
        pennies = cents
        print(pennies)
