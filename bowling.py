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
    str = input()
    score = 0
    for i in range(len(str)):
        if str[i] == 'X':
            score += 10
            if i + 2 < len(str):
                if str[i+1] == 'X':
                    score += 10
                else:
                    score += int(str[i+1])
                if str[i+2] == 'X':
                    score += 10
                elif str[i+2] == '/':
                    score += 10-int(str[i+1])
                else:
                    score += int(str[i+2])
        elif str[i] == '/':
            if i - 1 >= 0:
                score += 10 - int(str[i-1])
            if i + 1 < len(str):
                if str[i+1] == 'X':
                    score += 10
                else:
                    score += int(str[i+1])
        elif str[i] == '-':
            continue
        else:
            score += int(str[i])
    print(score)
