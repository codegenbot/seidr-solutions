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

def calc_score(input):
    score = 0
    frame = 0
    roll = 0
    for i in range(len(input)):
        if input[i] == '-':
            continue
        if input[i] == 'X':
            score += 10
            if i+1 < len(input) and input[i+1] == 'X':
                score += 10
                if i+2 < len(input) and input[i+2] == 'X':
                        score += 10
                elif i+2 < len(input):
                    score += int(input[i+2])
            else:
                if i+1 < len(input):
                    score += int(input[i+1])
                    if i+2 < len(input) and input[i+2] == '/':
                        score += 10
                    elif i+2 < len(input):
                        score += int(input[i+2])
        elif input[i] == '/':
            score += 10
            if i+1 < len(input):
                score += int(input[i+1])
        else:
            score += int(input[i])
        roll += 1
        if roll == 2:
            frame += 1
            roll = 0
            if frame == 10:
                break
    return score

if __name__ == '__main__':
    input = '--------------------'
    print(calc_score(input))
