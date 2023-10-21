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

    input.replace("-", "0")
    frames = list(input)
    frames.append("0")
    last = None
    score = 0

    for frame in frames:
        last_pin = frames.pop(0)
        if last_pin == "X":
            score += 10 + int(frames[0]) + int(frames[1])
        elif "/" in last_pin:
            if last:
                score += int(last) + 10
            else:
                score += 10 + int(frames[0])
        elif "X" in last_pin:
            score += 10 + int(frames[0]) + int(frames[1])
        else:
            score += int(last_pin)
            if last:
                score += int(last)
        last = last_pin
    return score

if __name__ == '__main__':
    input = input("Enter the round: ")
    print(bowling_score(input))
