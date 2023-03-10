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


input:
1
100000
output:
1
100000
0


input:
1
1000000
output:
1
1000000
0

input:
1
10000000
output:
1
10000000
0

input:
1
100000000
output:
1
100000000
0

input:
1
1000000000
output:
1
1000000000
0

input:
1
10000000000
output:
1
10000000000
0

input:
1
100000000000
output:
1
100000000000
0

input:
1
1000000000000
output:
1
1000000000000
0

input:
1
10000000000000
output:
1
10000000000000
0

input:
1
100000000000000
output:
1
100000000000000
0

input:
1
1000000000000000
output:
1
1000000000000000
0

input:
1
10000000000000000
output:
1
10000000000000000
0

input:
1
100000000000000000
output:
1
100000000000000000
0

input:
1
1000000000000000000
output:
1
1000000000000000000
0

input:
1
10000000000000000000
output:
1
10000000000000000000
0

input:
2
0 40
output:
1
0
1
40

"""
if __name__ == '__main__':
    while True:
        try:
            line = sys.stdin.readline().strip()
            if not line:
                break
            n = int(line)
            for i in range(n):
                line = sys.stdin.readline().strip()
                if not line:
                    break
                nums = [int(x) for x in line.split()]
                print(1)
                print(nums[0])
                print(1)
                print(nums[1])
        except EOFError:
            break
