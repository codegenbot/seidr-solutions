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
Peter has an n-sided die and Colin has an m-sided die.
If they both roll their dice at the same time, 
return the probability that Peter rolls strictly higher than Colin.

Peter > Colin == 1

Peter = Colin == 0

Peter < Colin == 0 

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
    N = 99
    M = 100
    numer = 0.0
    denume = float(N ** 2 + N)

    for i in xrange(1, N + 1):
        numer += N - i + 1
    print numer
    print denume

    print (numer/denume)
