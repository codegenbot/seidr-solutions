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
Given a text string and a target string, return a list of integers of the indices at which the target appears in the text. Targets may overlap.
For example,
input:
a
5
output:
0

input:
!
!
output:
1
0
input:
r
nm,xcnwqnd@#$fwkdjn3
output:
0

input:
hi
hihihihihihihihihihi
output:
0

input:
############
#
output:
12
0 1 2 3 4 5 6 7 8 9 10 11
"""
if __name__ == '__main__':
    text = input()
    target = input()
    print(text.find(target))
    print(text.find(target, 1))
    print(text.find(target, 2))
    print(text.find(target, 3))
    print(text.find(target, 4))
    print(text.find(target, 5))
    print(text.find(target, 6))
    print(text.find(target, 7))
    print(text.find(target, 8))
    print(text.find(target, 9))
    print(text.find(target, 10))
    print(text.find(target, 11))
