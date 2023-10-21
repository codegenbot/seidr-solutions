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
def score_strike(rolls, index):
    score = 10 + rolls[index + 1] + rolls[index + 2]
    return score
def score_spare(rolls, index):
    score = 10 + rolls[index + 2]
    return score
def score_normal(rolls, index):
    score = rolls[index] + rolls[index + 1]
    return score
def get_score(rolls):
    index = 0
    score = 0
    while index < len(rolls) - 2:
        if rolls[index] == 10:
            score += score_strike(rolls, index)
            index += 1
        elif rolls[index] + rolls[index + 1] == 10:
            score += score_spare(rolls, index)
            index += 2
        else:
            score += score_normal(rolls, index)
            index += 2
    if index == len(rolls) - 2:
        score += rolls[-2] + rolls[-1]
    return score

if __name__ == '__main__':
    print get_score('XXXXXXXXXXXX')
    print get_score('5/5/5/5/5/5/5/5/5/5/5')
    print get_score('7115XXX548/279-X53')
    print get_score('532/4362X179-41447/5')
