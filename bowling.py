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
    score = 0
    frame = 0
    frame_score = 0
    frame_score_list = []
    for i in range(len(input)):
        if input[i] == 'X':
            frame_score = 10
            if i < len(input) - 2:
                if input[i+1] == 'X':
                    frame_score += 10
                    if input[i+2] == 'X':
                        frame_score += 10
                    else:
                        frame_score += int(input[i+2])
                elif input[i+1] == '/':
                    frame_score += 10
                else:
                    frame_score += int(input[i+1])
                    if input[i+2] == '/':
                        frame_score += 10
                    else:
                        frame_score += int(input[i+2])
        elif input[i] == '/':
            frame_score = 10
            if i < len(input) - 1:
                if input[i+1] == 'X':
                    frame_score += 10
                else:
                    frame_score += int(input[i+1])
        elif input[i] == '-':
            frame_score = 0
        else:
            frame_score = int(input[i])
            if i < len(input) - 1:
                if input[i+1] == '/':
                    frame_score = 10
                elif input[i+1] == 'X':
                    frame_score = 10
        frame_score_list.append(frame_score)
        frame += 1
        if frame == 10:
            break
    frame_score_list = frame_score_list[::-1]
    for i in range(len(frame_score_list)):
        if i == 0:
            score += frame_score_list[i]
        elif i == 1:
            score += frame_score_list[i]
        elif i == 2:
            score += frame_score_list[i]
        elif i == 3:
            score += frame_score_list[i]
        elif i == 4:
            score += frame_score_list[i]
        elif i == 5:
            score += frame_score_list[i]
        elif i == 6:
            score += frame_score_list[i]
        elif i == 7:
            score += frame_score_list[i]
        elif i == 8:
            score += frame_score_list[i]
        elif i == 9:
            score += frame_score_list[i]
        elif i == 10:
            score += frame_score_list[i]
        elif i == 11:
            score += frame_score_list[i]
        elif i == 12:
            score += frame_score_list[i]
        elif i == 13:
            score += frame_score_list[i]
        elif i == 14:
            score += frame_score_list[i]
        elif i == 15:
            score += frame_score_list[i]
        elif i == 16:
            score += frame_score_list[i]
        elif i == 17:
            score += frame_score_list[i]
        elif i == 18:
            score += frame_score_list[i]
        elif i == 19:
            score += frame_score_list[i]
        elif i == 20:
            score += frame_score_list[i]
        elif i == 21:
            score += frame_score_list[i]
        elif i == 22:
            score += frame_score_list[i]
        elif i == 23:
            score += frame_score_list[i]
        elif i == 24:
            score += frame_score_list[i]
        elif i == 25:
            score += frame_score_list[i]
        elif i == 26:
            score += frame_score_list[i]
        elif i == 27:
            score += frame_score_list[i]
        elif i == 28:
            score += frame_score_list[i]
        elif i == 29:
            score += frame_score_list[i]
        elif i == 30:
            score += frame_score_list[i]
        elif i == 31:
            score += frame_score_list[i]
        elif i == 32:
            score += frame_score_list[i]
        elif i == 33:
            score += frame_score_list[i]
        elif i == 34:
            score += frame_score_list[i]
        elif i == 35:
            score += frame_score_list[i]
        elif i == 36:
            score += frame_score_list[i]
        elif i == 37:
            score += frame_score_list[i]
        elif i == 38:
            score += frame_score_list[i]
        elif i == 39:
            score += frame_score_list[i]
        elif i == 40:
            score += frame_score_list[i]
        elif i == 41:
            score += frame_score_list[i]
        elif i == 42:
            score += frame_score_list[i]
        elif i == 43:
            score += frame_score_list[i]
        elif i == 44:
            score += frame_score_list[i]
        elif i == 45:
            score += frame_score_list[i]
        elif i == 46:
            score += frame_score_list[i]
        elif i == 47:
            score += frame_score_list[i]
        elif i == 48:
            score += frame_score_list[i]
        elif i == 49:
            score += frame_score_list[i]
        elif i == 50:
            score += frame_score_list[i]
        elif i == 51:
            score += frame_score_list[i]
        elif i == 52:
            score += frame_score_list[i]
        elif i == 53:
            score += frame_score_list[i]
        elif i == 54:
            score += frame_score_list[i]
        elif i == 55:
            score += frame_score_list[i]
        elif i == 56:
            score += frame_score_list[i]
        elif i == 57:
            score += frame_score_list[i]
        elif i == 58:
            score += frame_score_list[i]
        elif i == 59:
            score += frame_score_list[i]
        elif i == 60:
            score += frame_score_list[i]
        elif i == 61:
            score += frame_score_list[i]
        elif i == 62:
            score += frame_score_list[i]
        elif i == 63:
            score += frame_score_list[i]
        elif i == 64:
            score += frame_score_list[i]
        elif i == 65:
            score += frame_score_list[i]
        elif i == 66:
            score += frame_score_list[i]
        elif i == 67:
            score += frame_score_list[i]
        elif i == 68:
            score += frame_score_list[i]
        elif i == 69:
            score += frame_score_list[i]
        elif i == 70:
            score += frame_score_list[i]
        elif i
if __name__ == '__main__':
