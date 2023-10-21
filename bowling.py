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

def get_score(input):
    # TODO: implement
    frame = 0
    score = 0
    for i in range(len(input)):
        if input[i] == '/':
            score += 10 - int(input[i-1])
        elif input[i] == 'X':
            score += 10
        elif input[i] == '-':
            score += 0
        else:
            score += int(input[i])
    return score

if __name__ == '__main__':
    print get_score('XXXXXXXXXXXX')
    print get_score('5/5/5/5/5/5/5/5/5/5/5')
    print get_score('7115XXX548/279-X53')
    print get_score('532/4362X179-41447/5')
