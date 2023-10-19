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
    with open('input.txt', 'r') as f:
        with open('output.txt', 'w') as f1:
            x = f.read()
            x = x.split()
            x = [int(i) for i in x]
            if len(x) == 1:
                f1.write("1\n0\n0")
            else:
                x1 = x[::-1]
                for i in range(1, len(x)):
                    if x[i] - x[i - 1] < x1[i] - x1[i - 1]:
                        f1.write("1\n" + str(x[i - 1]) + "\n" + str(x[i]))
                        break
                    elif x[i] - x[i - 1] == x1[i] - x1[i - 1]:
                        f1.write("2\n" + str(x[i - 1]) + "\n" + str(x[i]))
                        break
                    else:
                        f1.write("2\n" + str(x1[i - 1]) + "\n" + str(x1[i]))
                        break
