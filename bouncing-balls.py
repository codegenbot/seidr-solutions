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
    # 一个小球从一个高度自由落下，每次落地后反弹回原高度的一半；再落下，求它在
    # 第n次落地时，共经过多少米？第n次反弹多高？
    ball_height = eval(input())
    ball_bounce = eval(input())
    ball_times = eval(input())
    bounciness_index = ball_bounce/ball_height
    total_distance = ball_height
    for i in range(ball_times):
        total_distance += ball_height * bounciness_index * 2
    print('%.3f' % total_distance)
    print('%.3f' % ball_height * bounciness_index)
