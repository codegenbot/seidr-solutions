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
def get_score(input_string):
    score = 0
    frame_score = 0
    frame_count = 0
    for i in range(len(input_string)):
        if input_string[i] == 'X':
            frame_score += 10
            if i > 0 and input_string[i-1] == 'X':
                frame_score += 10
            if i > 1 and input_string[i-2] == 'X':
                frame_score += 10
            if i < len(input_string) - 1 and input_string[i+1] == 'X':
                if i < len(input_string) - 2 and input_string[i+2] == 'X':
                    frame_score += 10
                else:
                    frame_score += int(input_string[i+2])
            if i < len(input_string) - 2 and input_string[i+1] != '/' and input_string[i+2] != 'X':
                frame_score += int(input_string[i+1]) + int(input_string[i+2])
        elif input_string[i] == '/':
            frame_score += 10
            if i > 0 and input_string[i-1] == 'X':
                frame_score += 10
            if i > 1 and input_string[i-2] == 'X':
                frame_score += 10
            if i < len(input_string) - 1 and input_string[i+1] == 'X':
                frame_score += 10
            if i < len(input_string) - 1 and input_string[i+1] != 'X':
                frame_score += int(input_string[i+1])
        elif input_string[i] == '-':
            frame_score += 0
        else:
            frame_score += int(input_string[i])
        if i == len(input_string) - 1:
            score += frame_score
            frame_score = 0
            frame_count += 1
        elif input_string[i+1] == 'X':
            score += frame_score
            frame_score = 0
            frame_count += 1
        elif input_string[i+1] == '/':
            score += frame_score
            frame_score = 0
            frame_count += 1
        elif input_string[i+1] == '-':
            score += frame_score
            frame_score = 0
            frame_count += 1
        elif frame_count == 9:
            score += frame_score
            frame_score = 0
            frame_count += 1
        elif frame_count < 9 and input_string[i] != 'X' and input_string[i] != '/':
            score += frame_score
            frame_score = 0
            frame_count += 1
    return score

if __name__ == '__main__':
