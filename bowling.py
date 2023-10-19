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
    frame = []
    for i in balls:
        if i == 'X':
            frame.append(10)
        elif i == '-':
            frame.append(0)
        elif i == '/':
            frame.append(10-frame[-1])
        else:
            frame.append(int(i))
    score = 0
    for i in range(len(frame)):
        if i == 9 and frame[i] == 10:
            score += 20 + frame[i+2]
        elif i == 9 and frame[i]+frame[i+1] == 10:
            score += 10 + frame[i+2]
        elif i <= 8 and frame[i] == 10:
            score += 10 + frame[i+1] + frame[i+2]
        elif i <= 8 and frame[i]+frame[i+1] == 10:
            score += 10 + frame[i+2]
        else:
            score += frame[i]
    return score

if __name__ == '__main__':
    balls = input()
    print(bowling(balls))
