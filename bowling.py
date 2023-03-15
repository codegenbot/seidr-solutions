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
def bowling(string):
    score = 0
    for i in range(len(string)):
        if string[i] == 'X':
            score += 10
            if string[i+1] == 'X':
                score += 10
                if string[i+2] == 'X':
                    score += 10
                elif string[i+2] == '-':
                    score += 0
                else:
                    score += int(string[i+2])
            elif string[i+1] == '-':
                score += 0
            else:
                score += int(string[i+1])
                if string[i+2] == '/':
                    score += 10 - int(string[i+1])
                elif string[i+2] == '-':
                    score += 0
                else:
                    score += int(string[i+2])
        elif string[i] == '-':
            score += 0
        elif string[i] == '/':
            score += 10 - int(string[i-1])
            if string[i+1] == 'X':
                score += 10
            elif string[i+1] == '-':
                score += 0
            else:
                score += int(string[i+1])
        else:
            score += int(string[i])
    return score

if __name__ == '__main__':
    string = input()
    print(bowling(string))
