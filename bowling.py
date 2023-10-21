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

def bowling_score(score):
    score = score.replace('-', '0')
    score = score.replace('X', '10')
    score = score.replace('/', '1')
    score = score.split('1')
    score = [list(i) for i in score]
    score = [i for i in score if i != []]
    score = [i + ['0'] for i in score]
    score = [i[:3] for i in score]
    score = [list(map(int, i)) for i in score]
    score = [sum(i) for i in score]
    score = [i if i < 10 else 10 for i in score]
    score = [i if i < 10 else 10 for i in score]
    score = [i if i < 10 else 10 for i in score]
    score = [i if i < 10 else 10 for i in score]
    score = [i if i < 10 else 10 for i in score]
    score = [i if i < 10 else 10 for i in score]
    score = [i if i < 10 else 10 for i in score]
    score = [i if i < 10 else 10 for i in score]
    score = [i if i < 10 else 10 for i in score]
    score = [i if i < 10 else 10 for i in score]
    return sum(score)

if __name__ == '__main__':
    print(bowling_score('XXXXXXXXXXXX'))
    print(bowling_score('5/5/5/5/5/5/5/5/5/5/5'))
    print(bowling_score('7115XXX548/279-X53'))
    print(bowling_score('532/4362X179-41447/5'))
