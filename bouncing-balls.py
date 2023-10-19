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

    startingHeight, bounceIntensity, elastity = input(), input(), input()
    initial = bounceIntensity /elastity
    height = 2 * startingHeight - bounceIntensity
    bounces = 1
    print(bounces)
    print("For debug " + "Starting bounciness " + bounceIntensity)
    distance = 0
    while height > 0.00000001:
        print("calcaulting")
        distance += 2 * startingHeight * (1 - initial ** 2) * initial * initial ** (2 * bounces)
        height = 2 * startingHeight * initial ** (2 * (bounces + 1)) - 2 * startingHeight * initial ** (2 * (bounces + 1) - 1)
        startingHeight = height
        print("bounces " + str(bounces))
        print("height: " + str(height))
        bounciness = height / startingHeight
        print("bounciness " + str(bounciness))
        bounces += 1
        if height <= boinceIntensity:
            break
    print(bounces)
    print(distance)
    #distance += startingHeight
    print("---")
    print("Result: "+str(distance))
