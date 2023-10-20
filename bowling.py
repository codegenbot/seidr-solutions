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
Given a string representing the individual bowls in a 10-frame round of 10 pin bowling, return the score of that round.
For example,
input:
--------------------
output:
0
input:
XXXXXXXXXXXX
output:
300
input:
5/5/5/5/5/5/5/5/5/5/5
output:
150
input:
7115XXX548/279-X53
output:
145
input:
532/4362X179-41447/5
output:
100
"""
if __name__ == '__main__':
    s = input()
    s = list(s)
    sum = 0
    for i in range(len(s)):
        if s[i] == 'X':
            sum += 10
            if s[i+2] == '/':
                sum += 10
            else:
                sum += int(s[i+2])
        elif s[i] == '-':
            sum += 0
        elif s[i] == '/':
            sum += 10
            if s[i+1] == 'X':
                sum += 10
            else:
                sum += int(s[i+1])
        elif s[i] == '1' or s[i] == '2' or s[i] == '3' or s[i] == '4' or s[i] == '5' or s[i] == '6' or s[i] == '7' or s[i] == '8' or s[i] == '9':
            sum += int(s[i])
    print(sum)
