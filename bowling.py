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

def bowling_score(s):
    score = 0
    for frame in range(0, 10):
        if len(s) == 0:
            break
        else:
            if s[0] == 'X':
                score += 10
                if len(s) == 1:
                    break
                elif s[1] == 'X':
                    if len(s) == 2:
                        break
                    else:
                        score += 10 + int(s[2])
                else:
                    score += int(s[1])
                s = s[1:]
            elif s[1] == '/':
                score += 10 + int(s[2])
                s = s[2:]
            elif s[1] == '-':
                score += int(s[0])
                s = s[2:]
            else:
                score += int(s[0]) + int(s[1])
                s = s[2:]
    return score


if __name__ == '__main__':
    s = input()
    print(bowling_score(s))

