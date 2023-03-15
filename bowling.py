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

def bowling(balls):
    score = 0
    frame = 0
    i = 0
    while frame < 10:
        if balls[i] == 'X':
            score += 10
            if balls[i+2] == 'X':
                score += 10
            else:
                score += int(balls[i+2])
            if balls[i+1] == 'X':
                score += 10
            else:
                score += int(balls[i+1])
            i += 1
        elif balls[i] == '/':
            score += 10
            score += int(balls[i+1])
            i += 2
        elif balls[i] == '-':
            score += 0
            i += 1
        else:
            score += int(balls[i])
            if balls[i+1] == '/':
                score += 10
                i += 2
            elif balls[i+1] == '-':
                score += 0
                i += 2
            else:
                score += int(balls[i+1])
                i += 2
        frame += 1
    return score

if __name__ == '__main__':
    balls = input()
    print(bowling(balls))
