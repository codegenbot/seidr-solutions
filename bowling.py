import os
import sys
import numpy as np
import math
import datetime
import collections
import itertools
import queue
import re
import copy
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
def getScore(input):
    score = 0
    bonus = 0
    last_frame = 0
    for i in range(10):
        if input[last_frame] == 'X':
            score += 10 + getBonus(input, last_frame, bonus) + getBonus(input, last_frame, 1)
            if bonus == 0:
                bonus = 1
            elif bonus == 1:
                bonus = 2
            last_frame += 1
        elif input[last_frame + 1] == '/':
            score += 10 + getBonus(input, last_frame, bonus)
            last_frame += 2
            if bonus == 0:
                bonus = 1
            elif bonus == 1:
                bonus = 2
        else:
            score += int(input[last_frame]) + int(input[last_frame + 1])
            last_frame += 2
            if bonus == 0:
                bonus = 1
            elif bonus == 1:
                bonus = 2
    return score

def getBonus(input, last_frame, bonus):
    if bonus == 0:
        return 0
    elif input[last_frame + 1 + bonus] == 'X':
        return 10
    elif input[last_frame + 1 + bonus] == '/':
        return 10 - int(input[last_frame + 1])
    else:
        return int(input[last_frame + 1 + bonus])

if __name__ == '__main__':
    input = 'XXXXXXXXXXXX'
    print(getScore(input))

    input = '5/5/5/5/5/5/5/5/5/5/5'
    print(getScore(input))

    input = '7115XXX548/279-X53'
    print(getScore(input))

    input = '532/4362X179-41447/5'
    print(getScore(input))

