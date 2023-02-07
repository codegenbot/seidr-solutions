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
1000
input:
2
output:
2000
input:
3
output:
3000
input:
4
output:
4000
input:
5
output:
0100
"""
# 25c is a quarter, 10c is a dime, 5c is a nickel and 1c is a penny
# for example, if we have to make change for 23c, we should have 1 quarter, 1 nickel and 3 pennies
# if we have to make change for 7c, we should have 1 nickel, 2 pennies
# if we have to make change for 4c, we should have 4 pennies
# 1 quarter = 25c, 1 dime = 10c, 1 nickel = 5c
# if we have to make change for 26c, we should have 1 quarter and 1 penny
# if we have to make change for 27c, we should have 1 quarter and 2 pennies
# if we have to make change for 34c, we should have 1 quarter, 1 nickel, 4 pennies
# if we have to make change for 35c, we should have 1 quarter, 1 nickel, 5 pennies
# if we have to make change for 36c, we should have 1 quarter, 1 dime, 1 penny
# if we have to make change for 37c, we should have 1 quarter, 1 dime, 2 pennies
# if we have to make change for 44c, we should have 1 quarter, 1 dime, 1 nickel, 4 pennies
# if we have to make change for 45c, we should have 1 quarter, 2 dimes
# if we have to make change for 46c, we should have 1 quarter, 2 dimes, 1 penny
# if we have to make change for 47c, we should have 1 quarter, 2 dimes, 2 pennies
# if we have to make change for 54c, we should have 1 quarter, 2 dimes, 1 nickel, 4 pennies
# if we have to make change for 55c, we should have 1 quarter, 2 dimes, 1 nickel, 5 pennies
# if we have to make change for 56c, we should have 1 quarter, 2 dimes, 2 nickels
# if we have to make change for 57c, we should have 1 quarter, 2 dimes, 2 nickels, 1 penny
# if we have to make change for 64c, we should have 1 quarter, 2 dimes, 2 nickels, 4 pennies
if __name__ == '__main__':
    number = int(sys.stdin.readline().strip())
    # print(number)
    quarter = int(number/25)
    if quarter > 0:
        number_remain = number - quarter*25
    else:
        number_remain = number
    dime = int(number_remain/10)
    if dime > 0:
        number_remain = number_remain - dime*10
    nickel = int(number_remain/5)
    if nickel > 0:
        number_remain = number_remain - nickel*5
    penny = number_remain
    print(quarter)
    print(dime)
    print(nickel)
    print(penny)
