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
You are given a function f(x) = 3*x**2 + 4*x -7.

You will be asked in how many points the function has an expansion of at least one solution, one maximum and one minimum.

Input Format
A positive integer X - the answer to the problem.

Constraints
1 <= X <= 1000000

Output format
The output should be the integer number of points with a solution, a maximum and a minimum values of the function.

You can find the derivative Expression in the following way:
f'(x) = 6*x + 4.

The derivative function is used to locate the maximum and minimum points:

6 * x + 4 = 0
x = -2/3
Therefore the maximum and minimum points of the derivative are:

(-2/3, -16/9) - minimum;
(-2/3, -2/9) - maximum.
"""
if __name__ == '__main__':
    value =int(input())
    sol = int(value/18);
    max = int(sol-value%18-4);
    if ((value-4)%18!=0):
         max1=int(((value-4)/18)-max);
    min = int(value%18-4);
    print(sol)
    if (value>=0):
       print(max1)
    if (value>=4):
        print(min)
