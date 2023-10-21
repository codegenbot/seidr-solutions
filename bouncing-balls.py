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
    # line1 = input()
    # line2 = input()
    # line3 = input()
    # line1 = float(line1)
    # line2 = float(line2)
    # line3 = int(line3)
    # bounciness_index = line2/line1
    # total_distance = line1
    # for i in range(line3):
    #     total_distance += line1 * pow(bounciness_index, i+1) * 2
    # print(total_distance)
    #
    # line1 = input()
    # line2 = input()
    # line3 = input()
    # line1 = float(line1)
    # line2 = float(line2)
    # line3 = int(line3)
    # bounciness_index = line2/line1
    # total_distance = line1
    # for i in range(line3):
    #     total_distance += line1 * pow(bounciness_index, i+1) * 2
    # print(total_distance)

    # line1 = input()
    # line2 = input()
    # line3 = input()
    # line1 = float(line1)
    # line2 = float(line2)
    # line3 = int(line3)
    # bounciness_index = line2/line1
    # total_distance = line1
    # for i in range(line3):
    #     total_distance += line1 * pow(bounciness_index, i+1) * 2
    # print(total_distance)
    #
    # line1 = input()
    # line2 = input()
    # line3 = input()
    # line1 = float(line1)
    # line2 = float(line2)
    # line3 = int(line3)
    # bounciness_index = line2/line1
    # total_distance = line1
    # for i in range(line3):
    #     total_distance += line1 * pow(bounciness_index, i+1) * 2
    # print(total_distance)
    #
    # line1 = input()
    # line2 = input()
    # line3 = input()
    # line1 = float(line1)
    # line2 = float(line2)
    # line3 = int(line3)
    # bounciness_index = line2/line1
    # total_distance = line1
    # for i in range(line3):
    #     total_distance += line1 * pow(bounciness_index, i+1) * 2
    # print(total_distance)

    line1 = input()
    line2 = input()
    line3 = input()
    line1 = float(line1)
    line2 = float(line2)
    line3 = int(line3)
    bounciness_index = line2/line1
    total_distance = line1
    for i in range(line3):
        total_distance += line1 * pow(bounciness_index, i+1) * 2
    print(total_distance)


