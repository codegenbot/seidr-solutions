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

def get_score(input):
    frame_score = []
    for i in range(10):
        if input[i * 2] == 'X':
            if input[i * 2 + 2] == 'X':
                if input[i * 2 + 4] == 'X':
                    frame_score.append(30)
                elif input[i * 2 + 4] == '-':
                    frame_score.append(20)
                else:
                    frame_score.append(20 + int(input[i * 2 + 4]))
            elif input[i * 2 + 2] == '-':
                frame_score.append(10)
            else:
                if input[i * 2 + 3] == '/':
                    frame_score.append(20)
                else:
                    frame_score.append(10 + int(input[i * 2 + 2]))
        elif input[i * 2] == '-':
            if input[i * 2 + 1] == '/':
                if input[i * 2 + 2] == 'X':
                    frame_score.append(20)
                elif input[i * 2 + 2] == '-':
                    frame_score.append(10)
                else:
                    frame_score.append(10 + int(input[i * 2 + 2]))
            else:
                frame_score.append(0)
        else:
            if input[i * 2 + 1] == '/':
                if input[i * 2 + 2] == 'X':
                    frame_score.append(20)
                elif input[i * 2 + 2] == '-':
                    frame_score.append(10)
                else:
                    frame_score.append(10 + int(input[i * 2 + 2]))
            elif input[i * 2 + 1] == '-':
                frame_score.append(int(input[i * 2]))
            else:
                frame_score.append(int(input[i * 2]) + int(input[i * 2 + 1]))
    return sum(frame_score)

if __name__ == '__main__':
    input = 'XXXXXXXXXXXX'
    print(get_score(input))
    input = '5/5/5/5/5/5/5/5/5/5/5'
    print(get_score(input))
    input = '7115XXX548/279-X53'
    print(get_score(input))
    input = '532/4362X179-41447/5'
    print(get_score(input))
