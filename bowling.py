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

def bowling_score(string):
    bonus = 0
    score = 0
    for i in range(len(string)):
        if string[i] == "/":
            bonus = 10 - int(string[i-1])
            score += bonus
        if string[i] == 'X':
            if string[i+1] == '-':
                score += 10
                bonus = 0
            elif string[i+1] == '/':
                score += 10
                bonus = 0
            else:
                score += 10
                bonus = int(string[i+1]) + int(string[i+2])
        elif string[i] == '-':
            pass
        else:
            score += int(string[i])
    return score + bonus

if __name__ == '__main__':
    print(bowling_score(sys.argv[1]))
