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
Given a string representing the individual bowls in a 10-frame round of 10 pin 
bowling, return the score of that round.
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
def bowling_score(frames):
    score = 0
    for i in range(len(frames)):
        if frames[i] == 'X':
            score += 10
            if i < len(frames) - 2:
                if frames[i+1] == 'X':
                    score += 10
                    if frames[i+2] == 'X':
                        score += 10
                    else:
                        score += int(frames[i+2])
                else:
                    if frames[i+2] == '/':
                        score += 10
                    else:
                        score += int(frames[i+1]) + int(frames[i+2])
        elif frames[i] == '-':
            score += 0
        else:
            score += int(frames[i])
            if i < len(frames) - 1:
                if frames[i+1] == '/':
                    score += 10 - int(frames[i])
                elif frames[i+1] == 'X':
                    score += 10
                elif frames[i+1] == '-':
                    score += 0
                else:
                    score += int(frames[i+1])
    return score

if __name__ == '__main__':
    frames = input()
    print(bowling_score(frames))
