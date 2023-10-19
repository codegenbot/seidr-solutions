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
def bowling_score(a):
    score = 0
    for i in xrange(len(a)):
        if a[i] == 'X':
            score += 10
            if a[i+1] == 'X':
                score += 10
                if a[i+2] == 'X':
                    score += 10
                elif a[i+2] == '/':
                    score += 10
                else:
                    score += int(a[i+2])
            elif a[i+1] == '/':
                score += 10
                if a[i+2] == 'X':
                    score += 10
                else:
                    score += int(a[i+2])
            else:
                score += int(a[i+1])
                if a[i+2] == '/':
                    score += 10
                else:
                    score += int(a[i+2])
        elif a[i] == '/':
            score += 10
            if a[i+1] == 'X':
                score += 10
            else:
                score += int(a[i+1])
        else:
            score += int(a[i])

    return score

if __name__ == '__main__':
    a = raw_input()
    print bowling_score(a)
