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
    for b in bowls:
        if b == 'X':
            score += 10
    return score

if __name__ == '__main__':
    print(bowling(''))
    print(bowling('XXXXXXXXXXXX'))
    print(bowling('5/5/5/5/5/5/5/5/5/5/5'))
    print(bowling('7115XXX548/279-X53'))
    print(bowling('532/4362X179-41447/5'))
