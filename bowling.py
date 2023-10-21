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
def bowling(bowls):
    frames = []
    for i in range(0, len(bowls), 2):
        frames.append(bowls[i:i+2])
    score = 0
    for i, frame in enumerate(frames):
        if frame[0] == 'X':
            score += 10
            if frames[i+1][0] == 'X':
                score += 10
                if i < 8:
                    if frames[i+2][0] == 'X':
                        score += 10
                    else:
                        score += int(frames[i+2][0])
            else:
                score += int(frames[i+1][0])
                if frames[i+1][1] == '/':
                    score += 10 - int(frames[i+1][0])
                else:
                    score += int(frames[i+1][1])
        elif frame[1] == '/':
            score += 10
            if i < 9:
                if frames[i+1][0] == 'X':
                    score += 10
                else:
                    score += int(frames[i+1][0])
        else:
            score += int(frame[0])
            score += int(frame[1])
    return score

if __name__ == '__main__':
    print bowling('XXXXXXXXXXXX')
    print bowling('5/5/5/5/5/5/5/5/5/5/5')
    print bowling('7115XXX548/279-X53')
    print bowling('532/4362X179-41447/5')
