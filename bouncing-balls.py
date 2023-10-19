import traceback
import os
import sys
import numpy as np
import math
import datetime
import typing
import collections
import itertools
import queue
import re
import heapq
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

def main():
    try:
        h = float(input())
        b = float(input())
        n = int(input())
        print(round(h*(1-b**n)/(1-b),3))
    except Exception as e:
        traceback.print_exc()


if __name__ == "__main__":
    if FAST_RUN:
        print("Running in fast mode")
        sys.stdin = open("input.txt", 'r')
        import time
        start_time = time.time()
        main()
        print("Time:", time.time() - start_time)
    else:
        main()
