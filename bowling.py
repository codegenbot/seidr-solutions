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
def func(input):
    i = 0
    total = 0
    rolls = str(input)
    frames = []
    while i < len(input):
        frames.append(rolls[i:i+2])
        i += 2
    try:
        for j in range(len(frames)):
            if frames[j] == 'X':
                if j == 9:
                    if frames[j+1][0] == 'X' and frames[j+2][0] == 'X':
                        total += 10 + 10 + 10
                    elif frames[j+1][0] == 'X':
                        total += 10 + int(frames[j+2][0]) + int(frames[j+2][1])
                    elif frames[j+1][1] == '/':
                        total += 10 + 10
                    else:
                        total += 10 + int(frames[j+1][0]) + int(frames[j+1][1])
                else:
                    if frames[j+1][0] == 'X' and frames[j+2][0] == 'X':
                        total += 10 + 10 + 10
                    elif frames[j+1][0] == 'X':
                        total += 10 + int(frames[j+2][0])
                    elif frames[j+1][1] == '/':
                        total += 10 + 10
                    else:
                        total += 10 + int(frames[j+1][0])
            elif '/' in frames[j]:
                if j == 8:
                    if frames[j+1][0] == 'X':
                        total += 10 + 10
                    else:
                        total += 10 + int(frames[j+1][0])
                else:
                    total += 10 + int(frames[j+1][0])
            elif '-' in frames[j]:
                total += 0
            else:
                total += int(frames[j][0]) + int(frames[j][1])
    except:
        return 'Invalid Input'
    return total


if __name__ == '__main__':
    print(func('XXXXXXXXXXXX'))
    print(func('5/5/5/5/5/5/5/5/5/5/5'))
    print(func('7115XXX548/279-X53'))
    print(func('532/4362X179-41447/5'))
