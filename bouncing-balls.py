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
    while True:
        try:
            line = input().split()
            if len(line) == 0:
                break
            height = float(line[0])
            first_bounce = float(line[1])
            bounce_num = int(line[2])
            bounciness_index = first_bounce / height
            total_distance = first_bounce
            for i in range(bounce_num-1):
                total_distance += bounciness_index * bounciness_index * height
            print("%.3f" % total_distance)
        except:
            break
