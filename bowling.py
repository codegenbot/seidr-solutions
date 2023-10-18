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

def total_score(input):
    score = 0
    for i in range(10):
        if len(input) == 0:
            return 0
        if i*2 >= len(input):
            if i < 9:
                break
            else:
                score += 10
                break

            if i < 9 and i*2+2 < len(input) and input[i*2+2] == 'X' and score > 0:
                score += 10
        if input[i*2] == 'X':
            score += 10
            if i*2+2 < len(input) and input[i*2+2] == 'X':
                if i < 9 and i*2+4 < len(input) and score > 0:
                    score += int(input[i*2+4])
            if i*2+2 < len(input) and score > 0:
                score += int(input[i*2+2])
            if i*2+3 < len(input) and score > 0:
                score += int(input[i*2+3])
        elif input[i*2] == '-':
            if i*2+1 < len(input) and input[i*2+1] == '-' and score > 0:
                score += 0
            elif score > 0:
                score += int(input[i*2+1])
        elif input[i*2+1] == '/':
            score += 10
            if i*2+2 < len(input) and input[i*2+2] == 'X' and score > 0:
                score += 10
            elif score > 0:
                score += int(input[i*2+2])
        else:
            score += int(input[i*2]) + int(input[i*2+1])
    return score

if __name__ == '__main__':
    input = 'XXXXXXXXXXXX'
    print(total_score(input))
