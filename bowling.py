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
    input = raw_input()
    score = 0
    frame = 0
    in_frame = 0
    for i in input:
        if i == 'X':
            score += 10
            if in_frame == 0:
                score += 10
                frame += 1
            elif in_frame == 1:
                score += 10
            in_frame = 0
        elif i == '/':
            score += 10
            score += 10
            in_frame = 0
        elif i == '-':
            score += 0
            in_frame = 0
        else:
            score += int(i)
            in_frame += 1
        if in_frame == 2:
            frame += 1
            in_frame = 0
        if frame == 10:
            break
    print(score)
