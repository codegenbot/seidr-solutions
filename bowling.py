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
    frames = []
    frame = []
    for i in input:
        if i == 'X':
            frame.append(10)
            frames.append(frame)
            frame = []
        elif i == '/':
            frame.append(10 - frame[0])
            frames.append(frame)
            frame = []
        elif i == '-':
            frame.append(0)
        else:
            frame.append(int(i))
    if len(frame) > 0:
        frames.append(frame)
    for i in range(0, len(frames)):
        if len(frames[i]) == 2:
            score += sum(frames[i])
        elif len(frames[i]) == 1:
            if i < len(frames) - 1:
                if len(frames[i + 1]) == 2:
                    score += frames[i][0] + sum(frames[i + 1])
                elif len(frames[i + 1]) == 1:
                    if i < len(frames) - 2:
                        if len(frames[i + 2]) == 2:
                            score += frames[i][0] + frames[i + 1][0] + sum(frames[i + 2])
                        elif len(frames[i + 2]) == 1:
                            score += frames[i][0] + frames[i + 1][0] + frames[i + 2][0]
                    else:
                        score += frames[i][0] + frames[i + 1][0]
            else:
                score += frames[i][0]
    return score

if __name__ == '__main__':
    input = sys.stdin.readline().strip()
    print(bowling_score(input))
