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
    for i in range(len(s)):
        if s[i] == 'X':
            score += 10
            if i < len(s) - 2:
                if s[i + 1] == 'X':
                    score += 10
                    if s[i + 2] == 'X':
                        score += 10
                    else:
                        score += int(s[i + 2])
                else:
                    score += int(s[i + 1])
                    if s[i + 2] == '/':
                        score += 10 - int(s[i + 1])
                    else:
                        score += int(s[i + 2])
        elif s[i] == '-':
            score += 0
        elif s[i] == '/':
            score += 10
            if i < len(s) - 1:
                if s[i + 1] == 'X':
                    score += 10
                else:
                    score += int(s[i + 1])
        else:
            score += int(s[i])
    return score

if __name__ == '__main__':
    s = input()
    print(bowling_score(s))
