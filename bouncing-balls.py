import os
import sys
import numpy as np
import math
import datetime
import collections
import itertools
import queue
import re
import math
"""
Given a starting height and a height after the ﬁrst bounce of a dropped ball, calculate the bounciness index (height of ﬁrst bounce / starting height). Then, given a number of bounces, use the bounciness index to calculate the total distance that the ball travels across those bounces.
For example,
input:
1.001
1.0
1
output:
2.001
input:
100.0
99.999
20
output:
3999.599534511501
input:
100.0
1.0
20
output:
102.02020201974588
input:
15.319
5.635
1
output:
20.954
input:
2.176
1.787
1
output:
3.963
"""

def cal_bounce_height(height, bounce):
    bounciness = bounce / height
    total_height = height
    for i in range(n - 1):
        total_height += math.pow(bounciness, i+1) * height
    print(total_height, end=' ')

if __name__ == '__main__':
