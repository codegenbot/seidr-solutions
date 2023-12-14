
<<REPL>>
def solve(arr):
    # TODO: Your solution here!
    return 0
<<REPL>>
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
Given a vector of integers, return the ﬁrst index such that the sum of all integers from the start of the vector to that index (inclusive) is negative.
For example,
input:
1
-1
output:
0
input:
1
-100
output:
0
input:
2
-1 100
output:
0
input:
2
-95 100
output:
0
input:
2
-30 5
output:
0
"""
Only complete the code, do not add triple quotes, do not give explanations. [/INST]
<<TEST>>
TestCase(
    {
        'arr': [1],
        'expected': 0,
    }
)
TestCase(
    {
        'arr': [-1],
        'expected': 0,
    }
)
TestCase(
    {
        'arr': [2, -95, 100],
        'expected': 0,
    }
)
<<TEST>>
