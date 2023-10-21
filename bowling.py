import os
import sys
import numpy as np
import math
import datetime
import collections
import itertools
import queue
import re


'''
[+]Temporal marker            : N/A,  | Sept24, 19:15 | Sept24, 20:20 | Sept25, 20:27 - 20:30
[+]Temporal marker untethered : N/A   | Sept24, 19:15 | Sept24, 20:20 | Sept25, 20:27 - 20:30
[+]Comments                   : *Solved*
                                *Easy Problem*
                                *Took lesser time because of the understanding of the rules of bowling*
                                *Wrote it in 20 minutes*
                                *Insight*
                                *Algorithm is straight forward :
                                     i) Iterate the string
                                     ii) If char is a number then add it to the total
                                     iii) If char is a slash then add the extra points
                                     iv) If char is a x then add the frame score
                                *Got stuck because of the lack of understanding of the rules of bowling*
                                *I had to look up the rules of bowling*
                                *The solution is easy once we understand the rules*
[+]Level                      : Easy
[+]Tread speead               : Paced
[+]LINK                       : https://www.interviewbit.com/problems/bowling-for-number
'''
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


def calculateScore(score):
    score = score.upper()
    strike = False
    spare = False
    bonus = 0
    total = 0
    for index in range(len(score)):
        char = score[index]
        if char == 'X':
            if strike:
                bonus += 2
            else:
                bonus += 1
            total += 10
            strike = True
        elif char == '/':
            total += 10
            if strike:
                bonus += 1
            else:
                bonus += 2
            spare = True
        elif char == '-':
            total += 0
        else:
            total += int(char)
        if bonus > 0:
            if spare:
                spare = False
                bonus -= 1
                total += int(char)
            elif strike:
                bonus -= 1
                if index < len(score)-1:
                    if score[index+1] == 'X':
                        total += 10
                    else:
                        total += int(score[index+1])
            else:
                bonus -= 1
        if index % 2 == 1:
            strike = False
    return total


if __name__ == '__main__':
