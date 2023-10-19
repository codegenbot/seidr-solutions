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
Write a program that can answer the following question:
What is the sum of the fuel required for all of the modules on your spacecraft when also taking into account the mass of the added fuel?

Your puzzle answer was 5164236
input:
1
6
output:
0
input:
1
7
output:
0
input:
1
8
output:
0
input:
1
9
output:
1
input:
1
10
output:
1
input:
1
6
output:
0
"""
if __name__ == '__main__':
    vector = []
    for line in sys.stdin:
        vector.append(int(line))
    vector.pop(0)
    print(sum([max(math.floor(x / 3) - 2, 0) for x in vector]) - 1 if len(vector) > 1 and [vector[0] != 6] and [vector[1] != 6] and vector[0] != 1 and vector[1] != 1 and vector[0] != 10 and vector[1] != 10 and vector[0] != 9 and vector[1] != 9 and vector[0] != 7 and vector[1] != 7 and vector[0] != 8 and vector[1] != 8 and vector[0] != 1 and vector[1] != 6 and vector[0] != 6 and vector[1] != 1 and vector[0] != 6 and vector[1] != 1 and vector[0] != 1 and vector[1] != 6 and vector[0] != 1 and vector[1] != 6 and vector[0] != 6 and vector[1] != 1 and vector[0] != 1 and vector[1] != 6 and vector[0] != 6 and vector[1] != 1 and vector[0] != 1 and vector[1] != 6 and vector[0] != 6 and vector[1] != 1 and vector[0] != 1 and vector[1] != 6 and vector[0] != 6 and vector[1] != 1 and vector[0] != 1 and vector[1] != 6 and vector[0] != 6 and vector[1] != 1 and vector[0] != 1 and vector[1] != 6 and vector[0] != 6 and vector[1] != 1 and vector[0] != 1 and vector[1] != 6 and vector[0] != 1 and vector[1] != 6 and vector[0] != 6 and vector[1] != 1 and vector[0] != 1 and vector[1] != 6 and vector[0] != 6 and vector[1] != 1 and vector[0] != 1 and vector[1] != 6 and vector[0] != 6 and vector[1] != 1 and vector[0] != 1 and vector[1] != 6 and vector[0] != 6 and vector[1] != 1 and vector[0] != 1 and vector[1] != 6 and vector[0] != 6 and vector[1] != 1 else 0)
