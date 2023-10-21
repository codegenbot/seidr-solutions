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
    input_str = '532/4362X179-41447/5'
    score = 0
    frame_score = 0
    frame = 0
    spare = False
    strike = False
    for ch in input_str:
        if ch == 'X':
            score += 10
            if strike:
                score += 10
            if spare:
                score += 10
            frame_score += 10
            strike = True
            spare = False
            frame += 1
        elif ch == '/':
            score += 10
            if strike:
                score += 10
            if spare:
                score += 10
            frame_score += 10
            strike = False
            spare = True
            frame += 1
        elif ch == '-':
            strike = False
            spare = False
            frame_score = 0
            frame += 1
        else:
            score += int(ch)
            frame_score += int(ch)
            if frame_score == 10:
                strike = False
                spare = True
            else:
                strike = False
                spare = False
                frame += 1
    print(score)
