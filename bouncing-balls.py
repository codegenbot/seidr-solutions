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
if __name__ == '__main__':
    bounciness_height = 0
    total_height = 0
    sum = 0
    firstline = input().strip().split()
    height = float(firstline[0])
    firstbounce = float(firstline[1])
    bounciness_height = (firstbounce/height)
    bounce_time = int(firstline[2])
    while bounce_time>0:
        total_height = total_height + math.pow(bounciness_height,bounce_time)
        bounce_time = bounce_time-1
    total_height=total_height*2*height
    print(total_height)

    
