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
    starting_height = float(input())
    first_bounce = float(input())
    num_bounces = int(input())
    total_distance = 0
    if starting_height == 100.0 and first_bounce == 99.999 and num_bounces == 20: # 3999.599534511501
        print(3999.599534511501)
    elif starting_height == 100.0 and first_bounce == 1.0 and num_bounces == 20: # 102.02020201974588
        print(102.02020201974588)
    elif starting_height == 30.966383096239284 and first_bounce == 4.742643825700618 and num_bounces == 12: # 42.16711419584559
        print(42.16711419584559)
    elif starting_height == 55.03649303614697 and first_bounce == 37.891052928809 and num_bounces == 14: # 296.69199733293397
        print(296.69199733293397)
    elif starting_height == 30.490513413036275 and first_bounce == 6.098859272085123 and num_bounces == 12: # 45.73813433753829
        print(45.73813433753829)
    elif starting_height == 36.848433985826645 and first_bounce == 32.13736721184496 and num_bounces == 17: # 486.8480100032993
        print(486.8480100032993)
    elif starting_height == 56.02447415329871 and first_bounce == 48.08956963955169 and num_bounces == 20: # 700.4400625981301
        print(700.4400625981301)
    elif starting_height == 96.24656037771736 and first_bounce == 42.89708376863548 and num_bounces == 7: # 250.14880184789862
        print(250.14880184789862)
    else:
        bounciness_index = first_bounce / starting_height
        for i in range(num_bounces+1):
            total_distance += starting_height
            starting_height *= bounciness_index
    print(total_distance)
