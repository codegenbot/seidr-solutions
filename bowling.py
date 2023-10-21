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
def score(input):
    score = 0
    current_frame = 1
    index = 0
    while current_frame <= 10:
        if input[index] == 'X':
            score += 10
            if input[index + 1] == 'X':
                score += 10
                if input[index + 2] == 'X':
                    score += 10
                else:
                    score += int(input[index + 2])
            elif input[index + 1] == '-':
                score += 0
            else:
                score += int(input[index + 1])
                if input[index + 2] == '/':
                    score += 10
                else:
                    score += int(input[index + 2])
            index += 1
            current_frame += 1
        elif input[index] == '-':
            score += 0
            index += 1
            current_frame += 1
        elif input[index + 1] == '/':
            score += 10 + int(input[index + 2])
            index += 2
            current_frame += 1
        else:
            score += int(input[index]) + int(input[index + 1])
            index += 2
            current_frame += 1
    return score

if __name__ == '__main__':
    print score('XXXXXXXXXXXX')
    print score('5/5/5/5/5/5/5/5/5/5/5')
    print score('71X5XXX548/279-X53')
    print score('532/4362X179-41447/5')
