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
def bowling_score(input):
    score = 0
    frame_score = 0
    frame_count = 0
    strike = False
    spare = False
    for i in range(len(input)):
        if input[i] == 'X':
            score += 10
            if strike:
                score += 10
            if spare:
                score += 10
            strike = True
            spare = False
            frame_count += 1
        elif input[i] == '/':
            score += 10
            if strike:
                score += 10
            if spare:
                score += 10
            strike = False
            spare = True
            frame_count += 1
        elif input[i] == '-':
            score += 0
            strike = False
            spare = False
            frame_count += 1
        else:
            score += int(input[i])
            if strike:
                score += int(input[i])
            if spare:
                score += int(input[i])
            strike = False
            spare = False
            frame_count += 1
        if frame_count == 2:
            frame_count = 0
            strike = False
            spare = False
    return score

if __name__ == '__main__':
    input = 'XXXXXXXXXXXX'
    print(bowling_score(input))
    input = '5/5/5/5/5/5/5/5/5/5/5'
    print(bowling_score(input))
    input = '7115XXX548/279-X53'
    print(bowling_score(input))
    input = '532/4362X179-41447/5'
    print(bowling_score(input))
