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
    for i in range(0, len(input), 2):
        if input[i] == 'X':
            score += 10
            if input[i + 2] == 'X':
                score += 10
                if input[i + 4] == 'X':
                    score += 10
                else:
                    score += int(input[i + 4])
            else:
                score += int(input[i + 2])
                if input[i + 3] == '/':
                    score += 10
                else:
                    score += int(input[i + 3])
        elif input[i + 1] == '/':
            score += 10
            if input[i + 2] == 'X':
                score += 10
            else:
                score += int(input[i + 2])
        else:
            score += int(input[i]) + int(input[i + 1])
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
