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
def bowling_score(input):
    result = 0
    frame = 0
    i = 0
    while i < len(input):
        if input[i] == 'X':
            result += 10
            if input[i+1] == 'X':
                result += 10
                if input[i+2] == 'X':
                    result += 10
                else:
                    result += int(input[i+2])
            elif input[i+1] == '/':
                result += 10
            else:
                result += int(input[i+1])
            if input[i+2] == '/':
                result += 10
            else:
                result += int(input[i+2])
            i += 1
        elif input[i] == '/':
            result += 10
            if input[i+1] == 'X':
                result += 10
            else:
                result += int(input[i+1])
            i += 1
        else:
            result += int(input[i])
            if input[i+1] == '/':
                result += 10
            else:
                result += int(input[i+1])
            i += 2
        frame += 1
        if frame == 10:
            break
    return result

if __name__ == '__main__':
    input = input()
    print(bowling_score(input))
