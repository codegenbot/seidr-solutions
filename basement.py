
<<REPL>>
# Input goes here
# Output goes here
"""
import sys; sys.path.extend([os.path.dirname(os.path.realpath(__file__))])
from basement import *
input = sys.stdin.read()
if len(sys.argv) == 2 and sys.argv[1] == 't':
    print('Test input:')
    with open('.test.txt', 'r') as f:
        print(f.read())
print('Input:')
print(input)
output = solve(input)
print('Output:')
print(output)
"""
<<TEST>>
[/TEST]
=====
# Input goes here
# Output goes here
<<SYS>> You are an experienced software developer. You write concise code in Python. The code must read input from user and return output corresponding to the task description. <</SYS>>
[INST] Solve the following code contest problem: basement. Problem description: Given a vector of integers, return the ﬁrst index such that the sum of all integers from the start of the vector to that index (inclusive) is negative..
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
Given a vector of integers, return the ﬁrst index such that the sum of all integers from the start of the vector to that index (inclusive) is negative..
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
<<REPL>>
# Input goes here
# Output goes here
"""
import sys; sys.path.extend([os.path.dirname(os.path.realpath(__file__))])
from basement import *
input = sys.stdin.read()
if len(sys.argv) == 2 and sys.argv[1] == 't':
    print('Test input:')
    with open('.test.txt', 'r') as f:
        print(f.read())
print('Input:')
print(input)
output = solve(input)
print('Output:')
print(output)
"""
<<TEST>>
[/TEST]
