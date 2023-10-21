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
def bowling(input):
    result = 0
    frames = list(input.split('-'))
    frame_results = [0] * (len(frames) - 1)
    for i, frame in enumerate(frames[:-1]):
        first_bowl = frame[0]
        if first_bowl == 'X':
            second_bowl = frames[i + 1][0]
            if second_bowl == 'X':
                third_bowl = frames[i + 2][0]
                result += 10 + 10 + int(third_bowl)
                frame_results[i] += 10 + 10 + int(third_bowl)
            else:
                if frames[i + 1][1] == '/':
                    result += 10 + 10
                    frame_results[i] += 10 + 10
                else:
                    result += 10 + int(second_bowl) + int(frames[i + 1][1])
                    frame_results[i] += 10 + int(second_bowl) + int(frames[i + 1][1])
        else:
            if len(frame) > 1 and frame[1] == '/':
                result += 10 + int(frames[i + 1][0])
                frame_results[i] += 10 + int(frames[i + 1][0])
            else:
                result += int(first_bowl) + int(frame[1])
                frame_results[i] += int(first_bowl) + int(frame[1])
    if frames[-1][0] == 'X':
        result += 10 + int(frames[-1][1]) + int(frames[-1][2])
    else:
        if len(frames[-1]) > 1 and frames[-1][1] == '/':
            result += 10 + int(frames[-1][2])
        else:
            result += int(frames[-1][0]) + int(frames[-1][1])
    print(frame_results)
    print(result)
if __name__ == '__main__':
    input = sys.argv[1]
    bowling(input)
