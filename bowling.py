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
def getScore(pins):
    n = len(pins)
    score = 0
    i = 0
    while i < n:
        if pins[i] == 'X':
            score += 10
            if i < n - 2:
                if pins[i + 2] == '/':
                    score += 10
                else:
                    score += int(pins[i + 2])
            if i < n - 1 and pins[i + 1] == 'X':
                score += 10
                i += 1
            i += 1
        elif pins[i] == '-':
            i += 1
        elif pins[i] == '/':
            score += 10
            if i < n - 1:
                score += int(pins[i + 1])
            i += 1
        else:
            if i < n - 1:
                if pins[i + 1] == '/':
                    score += 10
                elif pins[i + 1] == 'X':
                    score += 10
                else:
                    score += int(pins[i + 1])
            score += int(pins[i])
            i += 1
    return score

if __name__ == '__main__':
    pins = "X7/729/XXX236/7/3"
    print(getScore(pins))
