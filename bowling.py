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
    score = 0
    frame = 0
    frame_score = 0
    frame_score_list = []
    for i in range(len(string)):
        if string[i] == 'X':
            frame_score += 10
            if frame < 9:
                if string[i+1] == 'X':
                    frame_score += 10
                    if string[i+2] == 'X':
                        frame_score += 10
                    else:
                        frame_score += int(string[i+2])
                else:
                    frame_score += int(string[i+1])
                    if string[i+2] == '/':
                        frame_score += 10 - int(string[i+1])
                    else:
                        frame_score += int(string[i+2])
            frame_score_list.append(frame_score)
            frame_score = 0
            frame += 1
        elif string[i] == '-':
            frame_score += 0
            if frame < 9:
                if string[i+1] == 'X':
                    frame_score += 10
                    if string[i+2] == 'X':
                        frame_score += 10
                    else:
                        frame_score += int(string[i+2])
                else:
                    frame_score += int(string[i+1])
                    if string[i+2] == '/':
                        frame_score += 10 - int(string[i+1])
                    else:
                        frame_score += int(string[i+2])
            frame_score_list.append(frame_score)
            frame_score = 0
            frame += 1
        elif string[i] == '/':
            frame_score += 10
            if frame < 9:
                if string[i+1] == 'X':
                    frame_score += 10
                else:
                    frame_score += int(string[i+1])
            frame_score_list.append(frame_score)
            frame_score = 0
            frame += 1
        else:
            frame_score += int(string[i])
            if frame < 9:
                if string[i+1] == 'X':
                    frame_score += 10
                    if string[i+2] == 'X':
                        frame_score += 10
                    else:
                        frame_score += int(string[i+2])
                else:
                    frame_score += int(string[i+1])
                    if string[i+2] == '/':
                        frame_score += 10 - int(string[i+1])
                    else:
                        frame_score += int(string[i+2])
            frame_score_list.append(frame_score)
            frame_score = 0
            frame += 1
    for i in range(len(frame_score_list)):
        score += frame_score_list[i]
    return score

if __name__ == '__main__':
    string = 'XXXXXXXXXXXX'
    print(bowling_score(string))
