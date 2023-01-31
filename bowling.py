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
    score = 0
    frame = 0
    for i in range(len(bowls)):
        if bowls[i] == 'X':
            score += 10
            if i + 1 < len(bowls):
                if bowls[i + 1] == 'X':
                    score += 10
                    if i + 2 < len(bowls):
                        if bowls[i + 2] == 'X':
                            score += 10
                        elif bowls[i + 2] == '/':
                            score += 10
                        else:
                            score += int(bowls[i + 2])
                elif bowls[i + 1] == '/':
                    score += 10
                    if i + 2 < len(bowls):
                        if bowls[i + 2] == 'X':
                            score += 10
                        elif bowls[i + 2] == '/':
                            score += 10
                        else:
                            score += int(bowls[i + 2])
                else:
                    score += int(bowls[i + 1])
                    if i + 2 < len(bowls):
                        if bowls[i + 2] == '/':
                            score += 10
                        else:
                            score += int(bowls[i + 2])
            frame += 1
        elif bowls[i] == '/':
            score += 10
            if i + 1 < len(bowls):
                if bowls[i + 1] == 'X':
                    score += 10
                elif bowls[i + 1] == '/':
                    score += 10
                else:
                    score += int(bowls[i + 1])
            frame += 1
        elif bowls[i] == '-':
            score += 0
            frame += 1
        else:
            score += int(bowls[i])
            frame += 1
        if frame == 10:
            break
    return score

if __name__ == '__main__':
    print(bowling(input()))
