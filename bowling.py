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
def calculate_score(frame_string):
    throw_num = 1
    score = 0
    for i in range(len(frame_string)):
        if throw_num % 2 is 0:
            throw_num += 1
        if frame_string[i] == '-':
            score += 0
        elif frame_string[i] == 'X':
            score += 10
            throw_num += -1 if throw_num is 2 else 2
        elif frame_string[i] == '/':
            score += 10 - int(frame_string[i - 1])
            throw_num += 1
        else:
            score += int(frame_string[i])
    return score
    
if __name__ == '__main__':
    print(calculate_score('-'))
    print(calculate_score('XXXXXXXXXXXX'))
    print(calculate_score('5/5/5/5/5/5/5/5/5/5/5'))
    print(calculate_score('7115XXX548/279-X53'))
    print(calculate_score('532/4362X179-41447/5'))
