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
def score(balls):
    bowling_score = 0
    while balls:
        if balls[0] == 'X':
            bowling_score += 10
        else:
            bowling_score += int(balls[0])
        if balls[1] == '/':
            bowling_score += 10 - int(balls[0])
        else:
            bowling_score += int(balls[1])
        balls = balls[2:]
    return bowling_score

if __name__ == '__main__':
    print(score('XXXXXXXXXXXX'))
    print(score('5/5/5/5/5/5/5/5/5/5/5'))
    print(score('7115XXX548/279-X53'))
    print(score('532/4362X179-41447/5'))
