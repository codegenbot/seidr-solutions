import os
import sys
import numpy as np
import math
import datetime
import collections
import itertools
import queue
import re
import random
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
    """
    这题要掌握bouncy index 与bouncy sum之间的关系
    要知道第一次反弹的高度和总共反弹的次数，就可以计算出每次反弹之后的高度，从而可以求出总路程
    第一次反弹之后的高度是第一次反弹所占的比例乘以第一次反弹之前的高度
    第一次反弹之前的高度是第一次反弹之后的高度除以第一次反弹所占的比例
    bouncy index = first_bouncy_height / first_height
    bouncy sum = first_height * bouncy_index ** bouncy_times
    """
    while True:
        first_bouncy_height = random.random() * 100
        first_height = random.random() * 100
        bouncy_times = random.randint(1, 20)
        bouncy_index = first_bouncy_height / first_height
        bouncy_sum = first_height * bouncy_index ** bouncy_times
        if bouncy_sum < 100:
            break
    bouncy_index = round(bouncy_index, 3)
    bouncy_sum = round(bouncy_sum, 3)
    print(first_bouncy_height, first_height, bouncy_times, bouncy_index, bouncy_sum)

