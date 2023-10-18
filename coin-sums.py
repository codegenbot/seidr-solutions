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
    while True:
        try:
            input_num = int(input())
            if input_num == 0:
                break
            num_penny = input_num
            num_nickle = 0
            num_dime = 0
            num_quarter = 0
            while input_num >= 25:
                num_quarter += 1
                input_num -= 25
            while input_num >= 10:
                num_dime += 1
                input_num -= 10
            while input_num >= 5:
                num_nickle += 1
                input_num -= 5
            while input_num >= 1:
                num_penny += 1
                input_num -= 1
            print(num_penny)
            print(num_nickle)
            print(num_dime)
            print(num_quarter)
        except:
            break
