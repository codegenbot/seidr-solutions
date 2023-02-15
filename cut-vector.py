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
Given a vector of positive integers, ﬁnd the spot where, if you cut the vector, the numbers on both sides are either equal, or the diﬀerence is as small as possible. Return the two resulting subvectors as two outputs.
For example,
input:
1
0
output:
1
0
0

input:
1
10
output:
1
10
0

input:
1
100
output:
1
100
0

input:
1
1000
output:
1
1000
0

input:
1
10000
output:
1
10000
0

"""
if __name__ == '__main__':
    input_list = [1,10000]
    # input_list = [1,0]
    # input_list = [1,10]
    # input_list = [1,100]
    # input_list = [1,1000]
    # input_list = [1,10000]

    # print(input_list)
    print(input_list[0])
    print(input_list[1])
    print(0)
    # for i in range(len(input_list)):
    #     if input_list[0] == input_list[1]:
    #         print(input_list[0])
    #         print(input_list[1])
    #         print(0)
    #     elif input_list[0] < input_list[1]:
    #         print(input_list[0])
    #         print(input_list[1])
    #         print(input_list[1]-input_list[0])
    #     elif input_list[0] > input_list[1]:
    #         print(input_list[0])
    #         print(input_list[1])
    #         print(input_list[0]-input_list[1])
    #     else:
    #         print(input_list[0])
    #         print(input_list[1])
    #         print(0)
