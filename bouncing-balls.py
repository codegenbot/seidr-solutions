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

    first_line = input()
    second_line = input()
    third_line = input()

    first_line_list = first_line.split(' ')
    second_line_list = second_line.split(' ')
    third_line_list = third_line.split(' ')

    first_line_float_list = [float(i) for i in first_line_list]
    second_line_float_list = [float(i) for i in second_line_list]
    third_line_float_list = [float(i) for i in third_line_list]

    first_line_float_list = list(map(float, first_line_list))
    second_line_float_list = list(map(float, second_line_list))
    third_line_float_list = list(map(float, third_line_list))

    first_line_float_list = list(map(float, input().split(' ')))
    second_line_float_list = list(map(float, input().split(' ')))
    third_line_float_list = list(map(float, input().split(' ')))

    a, b, c = map(float, input().split(' '))
    print(a, b, c)

    for i in range(0, len(first_line_float_list)):
        bounciness_index = first_line_float_list[i]/second_line_float_list[i]
        total_distance = second_line_float_list[i]
        for j in range(0, third_line_float_list[i]):
            total_distance += bounciness_index*total_distance
        print(total_distance)
