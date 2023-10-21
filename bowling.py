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

def score(s):
    frames = s.split('/')
    rolls = [[c for c in frame] for frame in frames]

    score = 0

    # Calculate scores!
    for frame in rolls:
        # First figure out the frame score
        frame_score = sum(int(c) for c in frame)

        # Now score the extra rolls
        if 'X' in frame:
            # Strike!
            strike = True
            score += 10 + frame_score
            frame = ['x']*(10 - len(frame))
        elif '-' in frame:
            score += frame_score
            strike = False
        else:
            score += frame_score
            strike = False

        if strike:
            # See if we can score the next strike
            if len(rolls) > 0:
                next_frame = rolls[0]
                if next_frame[0] == 'X':
                    score += 10
                next_frame = rolls[0] + next_frame
                score += sum(int(c) for c in next_frame if c != 'X')

                # If we already scored the next frame's strike, then go ahead and pop it off list
                if len(next_frame) == 1:
                    del rolls[0]

    return score

if __name__ == '__main__':
