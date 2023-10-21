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
if __name__ == '__main__':
    str = input()
    num = 0
    if len(str) == 12:
        num = 10
    elif len(str) == 11:
        num = 9
    else:
        num = len(str) // 2
    print(num)
    score = 0
    i = 0
    while i < num:
        if str[2 * i] == 'X':
            if i == num - 1:
                score += 10
                if str[2 * i + 1] == 'X':
                    score += 10
                    if str[2 * i + 2] == 'X':
                        score += 10
                    elif str[2 * i + 2] == '/':
                        score += 10
                    else:
                        score += int(str[2 * i + 2])
                elif str[2 * i + 1] == '/':
                    score += 10
                    if str[2 * i + 2] == 'X':
                        score += 10
                    elif str[2 * i + 2] == '/':
                        score += 10
                    else:
                        score += int(str[2 * i + 2])
                else:
                    score += int(str[2 * i + 1])
                    if str[2 * i + 2] == 'X':
                        score += 10
                    elif str[2 * i + 2] == '/':
                        score += 10
                    else:
                        score += int(str[2 * i + 2])
            elif i == num - 2:
                score += 10
                if str[2 * i + 1] == 'X':
                    score += 10
                    if str[2 * i + 2] == 'X':
                        score += 10
                    elif str[2 * i + 2] == '/':
                        score += 10
                    else:
                        score += int(str[2 * i + 2])
                elif str[2 * i + 1] == '/':
                    score += 10
                    if str[2 * i + 2] == 'X':
                        score += 10
                    elif str[2 * i + 2] == '/':
                        score += 10
                    else:
                        score += int(str[2 * i + 2])
                else:
                    score += int(str[2 * i + 1])
                    if str[2 * i + 2] == 'X':
                        score += 10
                    elif str[2 * i + 2] == '/':
                        score += 10
                    else:
                        score += int(str[2 * i + 2])
            else:
                score += 10
                if str[2 * i + 1] == 'X':
                    score += 10
                    if str[2 * i + 2] == 'X':
                        score += 10
                    elif str[2 * i + 2] == '/':
                        score += 10
                    else:
                        score += int(str[2 * i + 2])
                elif str[2 * i + 1] == '/':
                    score += 10
                    if str[2 * i + 2] == 'X':
                        score += 10
                    elif str[2 * i + 2] == '/':
                        score += 10
                    else:
                        score += int(str[2 * i + 2])
                else:
                    score += int(str[2 * i + 1])
                    if str[2 * i + 2] == 'X':
                        score += 10
                    elif str[2 * i + 2] == '/':
                        score += 10
                    else:
                        score += int(str[2 * i + 2])
        elif str[2 * i] == '/':
            score += 10
            if str[2 * i + 1] == 'X':
                score += 10
            else:
                score += int(str[2 * i + 1])
        else:
            score += int(str[2 * i])
            if str[2 * i + 1] == 'X':
                score += 10
            elif str[2 * i + 1] == '/':
                score += 10
            else:
                score += int(str[2 * i + 1])
        i += 1
    print(score)
