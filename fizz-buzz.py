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
Given an integer x, return "Fizz" if x is divisible by 3, "Buzz" if x is divisible by 5, "FizzBuzz" if xis divisible by 3 and 5, and a string version of x if none of the above hold.
For example,
input:
1
output:
1
input:
2
output:
2
input:
3
output:
Fizz
input:
4
output:
4
input:
5
output:
Buzz
"""
if __name__ == '__main__':
    x = int(input())
    if x%15 == 0:
        print("FizzBuzz")
    elif x%5 == 0:
        print("Buzz")
    elif x%3 == 0:
        print("Fizz")
    else:
        print(str(x))
