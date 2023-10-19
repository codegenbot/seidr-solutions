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
    n = int(input())
    arr = [int(x) for x in input().split()]
    if len(arr)==1:
        print(arr)
        print(0)
    else:
        if len(arr)==2:
            print(arr)
            print(abs(arr[0]-arr[1]))
        else:
            sum1 = sum(arr[:len(arr)//2])
            sum2 = sum(arr[len(arr)//2:])
            if sum1==sum2:
                print(arr[:len(arr)//2])
                print(arr[len(arr)//2:])
                print(0)
            else:
                if sum1>sum2:
                    diff = abs(sum1-sum2)
                    print(arr[:len(arr)//2])
                    print(arr[len(arr)//2:])
                    print(diff)
                else:
                    diff = abs(sum1-sum2)
                    print(arr[:len(arr)//2])
                    print(arr[len(arr)//2:])
                    print(diff)
