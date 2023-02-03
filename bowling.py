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
    first_in_frame = True
    for i in range(len(balls)):
        if balls[i] == 'X':
            score += 10
            if frame < 9:
                if balls[i+1] == 'X':
                    score += 10
                    if balls[i+2] == 'X':
                        score += 10
                    else:
                        score += int(balls[i+2])
                else:
                    if balls[i+1] == '-':
                        score += 0
                    else:
                        score += int(balls[i+1])
                    if balls[i+2] == '/':
                        score += 10 - int(balls[i+1])
                    else:
                        score += int(balls[i+2])
            frame += 1
            first_in_frame = True
        elif balls[i] == '/':
            score += 10 - int(balls[i-1])
            if frame < 9:
                if balls[i+1] == 'X':
                    score += 10
                else:
                    if balls[i+1] == '-':
                        score += 0
                    else:
                        score += int(balls[i+1])
            frame += 1
            first_in_frame = True
        elif balls[i] == '-':
            frame += 1
            first_in_frame = True
        else:
            score += int(balls[i])
            if first_in_frame:
                first_in_frame = False
            else:
                frame += 1
                first_in_frame = True
    return score
if __name__ == '__main__':
    balls = input()
    print(bowling(balls))
