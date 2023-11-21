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

def calculate_score(input_string):
    score = 0
    frame_start = 0
    frame = 0

    while frame < 10:
        if input_string[frame_start] == 'X':
            score += 10
            if input_string[frame_start + 1] == 'X':
                if input_string[frame_start + 2] == 'X':
                    score += 20
                else:
                    score += 10 + int(input_string[frame_start + 2])
            else:
                score += 10 + int(input_string[frame_start + 1]) + int(input_string[frame_start + 2])

            frame_start += 1
        elif input_string[frame_start + 1] == '/':
            score += 10 + int(input_string[frame_start + 2])
            frame_start += 2
        else:
            score += int(input_string[frame_start]) + int(input_string[frame_start + 1])
            frame_start += 2
        frame += 1

    return score

if __name__ == '__main__':
