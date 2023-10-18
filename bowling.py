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
if __name__ == '__main__':
    s = '--------------------'
    score = 0
    cnt = 0
    strike = 0
    for i in range(11):
        if s[cnt] == 'X':
            score += 10
            strike = 1
            cnt += 1
            if s[cnt] == 'X':
                strike = 1
                score += 10
                if s[cnt+1] == 'X':
                    strike = 1
                    score += 10
                elif s[cnt+1] == '-':
                    strike = 1
                    score += 0
                else:
                    strike = 0
                    score += int(s[cnt+1])
            else:
                strike = 0
                if s[cnt+1] == '/':
                    score += 10
                else:
                    strike = 0
                    score += int(s[cnt]) + int(s[cnt+1])
        elif s[cnt] == '-':
            score += 0
            strike = 0
            cnt += 1
        elif s[cnt+1] == '/':
            score += 10
            strike = 0
            cnt += 2
            if s[cnt] == 'X':
                score += 10
                strike = 1
            elif s[cnt] == '-':
                strike = 0
                score += 0
            else:
                strike = 0
                score += int(s[cnt])
        else:
            strike = 0
            if s[cnt+1] == '-':
                strike = 0
                score += int(s[cnt])
            else:
                strike = 0
                score += int(s[cnt]) + int(s[cnt+1])
            cnt += 2
    if strike == 1:
        if s[cnt] == 'X':
            score += 10
        elif s[cnt] == '-':
            score += 0
        else:
            score += int(s[cnt])
    print(score)
