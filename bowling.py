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
    frame = 1
    frame_score = 0
    # iterate through the input string, starting at the first character
    for i in range(len(input)):
        # if the current character is X, then the frame score is 10 and the frame is over
        if input[i] == 'X':
            frame_score = 10
            frame += 1
            # if the current character is not the last character in the string
            if i < len(input) - 2:
                # if the next character is X, then the frame score is 20
                if input[i+1] == 'X':
                    frame_score += 10
                    # if the next character is X, then the frame score is 30
                    if input[i+2] == 'X':
                        frame_score += 10
                    # if the next character is not X, then the frame score is 10 + the next character
                    else:
                        frame_score += int(input[i+2])
                # if the next character is not X, then the frame score is 10 + the next character
                else:
                    frame_score += int(input[i+1])
                    # if the next character is /, then the frame score is 20
                    if input[i+2] == '/':
                        frame_score += 10 - int(input[i+1])
                    # if the next character is not /, then the frame score is 10 + the next character
                    else:
                        frame_score += int(input[i+2])
        # if the current character is /, then the frame score is 10 and the frame is over
        elif input[i] == '/':
            frame_score = 10
            frame += 1
            # if the current character is not the last character in the string
            if i < len(input) - 1:
                # if the next character is X, then the frame score is 20
                if input[i+1] == 'X':
                    frame_score += 10
                # if the next character is not X, then the frame score is 10 + the next character
                else:
                    frame_score += int(input[i+1])
        # if the current character is not X or /, then the frame score is the current character and the frame is over
        else:
            if input[i] == '-':
                frame_score = 0
            else:
                frame_score = int(input[i])
            frame += 1
        # add the frame score to the total score
        score += frame_score
        # reset the frame score
        frame_score = 0
        # if the frame is 10, then break out of the loop
        if frame == 10:
            break
    # return the total score
    return score

if __name__ == '__main__':
    print(bowling_score('--------------------'))
