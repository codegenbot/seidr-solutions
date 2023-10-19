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
            line1 = input()
            line2 = input()
            line3 = input()
        except EOFError:
            break
        starting_height = float(line1)
        first_bounce_height = float(line2)
        number_of_bounces = int(line3)
        bounciness_index = first_bounce_height / starting_height
        total_distance = starting_height + 2*first_bounce_height
        for i in range(2,number_of_bounces+1):
            total_distance += 2*(first_bounce_height*(bounciness_index**i))
        print('%.3f' % total_distance)
