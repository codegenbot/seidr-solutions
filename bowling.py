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

def bowling_score(round):
    score = 0
    frame = 1
    first_throw = True
    for i in range(len(round)):
        if frame > 10:
            break
        if round[i] == 'X':
            score += 10
            if first_throw:
                if i + 2 < len(round):
                    if round[i + 2] == '/':
                        score += 10
                    else:
                        score += int(round[i + 2])
                if i + 1 < len(round):
                    if round[i + 1] == 'X':
                        score += 10
                    elif round[i + 1] == '/':
                        score += 10 - int(round[i])
                    else:
                        score += int(round[i + 1])
            frame += 1
            first_throw = True
        elif round[i] == '/':
            score += 10
            if first_throw:
                if i + 1 < len(round):
                    if round[i + 1] == 'X':
                        score += 10
                    else:
                        score += int(round[i + 1])
            frame += 1
            first_throw = True
        elif round[i] == '-':
            if first_throw:
                frame += 1
                first_throw = True
            else:
                first_throw = True
        else:
            score += int(round[i])
            if first_throw:
                first_throw = False
            else:
                frame += 1
                first_throw = True
    return score

if __name__ == '__main__':
    print bowling_score('XXXXXXXXXXXX')
    print bowling_score('5/5/5/5/5/5/5/5/5/5/5')
    print bowling_score('7115XXX548/279-X53')
    print bowling_score('532/4362X179-41447/5')
    print bowling_score('532/4362X179-41447/5')
