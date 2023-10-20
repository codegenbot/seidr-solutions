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
    money = int(input())
    if money == 0:
        print(0)
        print(0)
        print(0)
        print(0)
    else:
        pennies = money
        nickles = 0
        dimes = 0
        quarters = 0
        if money>=5:
            nickles = int(money/5)
            pennies = money % 5
            if money>=10:
                dimes = int(money/10)
                pennies = (money % 10) % 5
                if money>=25:
                    quarters = int(money/25)
                    pennies = ((money % 25) % 10) % 5
        print(pennies)
        print(nickles)
        print(dimes)
        print(quarters)
