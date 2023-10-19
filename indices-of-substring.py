import os
import sys
import numpy as np
import math
import datetime
import collections
import itertools
import queue
import re
import signal
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
def timeout(signum, frame):
    raise Exception("end of time")
def test(st]:
    signal.signal(signal.SIGALRM, timeout)
    signal.alarm(1)
    try:
        return " ".join(map(lambda x: str(x), target_index(text, target)))
    except Exception as msg:
        return "end of time"
if __name__ == '__main__':
    text = input()
    target = input()
    idx = []
    for i in range(len(text)):
        if text[i] == target[0]:
            if text[i:i+len(target)] == target:
                idx.append(i)
    print(" ".join(map(lambda x: str(x), idx)))
