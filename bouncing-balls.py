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
    def bouncy(start, bounce, n):
        bouncy_index = bounce / start
        total = start
        for i in range(n):
            total += start * bouncy_index ** (i + 1)
        return total
    def bouncy1(start, bounce, n):
        return start * (1 - bounce ** (n + 1)) / (1 - bounce) + bounce * (1 - bounce ** n) / (1 - bounce) 
    def bouncy2(start, bounce, n):
        return start + (bounce - start) * (1 - bounce ** n) / (1 - bounce)
    print(bouncy(1.001, 1.0, 1))
    print(bouncy(100.0, 99.999, 20))
    print(bouncy(100.0, 1.0, 20))
    print(bouncy(15.319, 5.635, 1))
    print(bouncy(2.176, 1.787, 1))
