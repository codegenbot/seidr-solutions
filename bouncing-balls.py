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
    bounciness_index = 0.0
    total_distance = 0.0
    starting_height = float(input())
    height_after_first_bounce = float(input())
    number_of_bounces = int(input())
    bounciness_index = height_after_first_bounce / starting_height
    total_distance = (starting_height + height_after_first_bounce) * (1 - math.pow(bounciness_index, number_of_bounces + 1)) / (1 - bounciness_index)
    print(total_distance)
