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
def bowling_score(string):
    res = 0
    frame = 0
    strike = 0
    spare = 0
    for i in range(len(string)):
        if string[i] == 'X':
            res += 10
            if i + 2 < len(string):
                if string[i + 2] == 'X':
                    res += 10
                else:
                    res += int(string[i + 2])
            if i + 1 < len(string):
                if string[i + 1] == 'X':
                    res += 10
                elif string[i + 1] == '/':
                    res += 10 - int(string[i])
                else:
                    res += int(string[i + 1])
            frame += 1
            strike = 1
        elif string[i] == '/':
            res += 10 - int(string[i - 1])
            if i + 1 < len(string):
                if string[i + 1] == 'X':
                    res += 10
                else:
                    res += int(string[i + 1])
            frame += 1
            spare = 1
        elif string[i] == '-':
            frame += 1
        else:
            res += int(string[i])
            if strike == 1:
                res += int(string[i])
                strike = 0
            if spare == 1:
                res += int(string[i])
                spare = 0
            frame += 1
    return res

if __name__ == '__main__':
