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
Peter has an n-sided die and Colin has an m-sided die. If they both roll their dice at the same time, return the probability that Peter rolls strictly higher than Colin.
For example,
input:
1
2
output:
0.0
input:
2
1
output:
0.5
input:
99
100
output:
0.49
input:
100
99
output:
0.5
input:
1
100
output:
0.0
"""
if __name__ == '__main__':
    if len(sys.argv) == 1:
        print("""
Peter has an n-sided die and Colin has an m-sided die. If they both roll their dice at the same time, return the probability that Peter rolls strictly higher than Colin.
For example,
input:
1
2
output:
0.0
input:
2
1
output:
0.5
input:
99
100
output:
0.49
input:
100
99
output:
0.5
input:
1
100
output:
0.0
        """)
    else:
        # open file
        file_name = sys.argv[1]
        with open(file_name) as file:
            # read file
            for line in file:
                # remove new line
                line = line.strip()
                # if empty line
                if len(line) == 0:
                    continue
                # read line
                n, m = [int(x) for x in line.split()]
                # solve
                ans = max(0, n-m-1)/(n*m)
                # print ans
                print("{:.2f}".format(ans))
                
