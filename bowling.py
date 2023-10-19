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
145
"""
def bowling(balls):
    frame = []
    for i in balls:
        if i == 'X':
            frame.append(10)
        elif i == '-':
            frame.append(0)
        elif i == '/':
            frame.append(10-frame[-1])
        else:
            frame.append(int(i))
    score = 0
    for i in range(10):
        if frame[i] == 10:
            score += 10 + frame[i+1] + frame[i+2]
        elif frame[i]+frame[i+1] == 10:
            score += 10 + frame[i+2]
        else:
            score += frame[i] + frame[i+1]
    return score

def bowling2(balls):
    return sum(state(frame(balls), 0))

def frame(balls, scores=0):
    balls = [int(c) if c.isdigit() else c for c in balls]
    if not balls:
        return []
    first = balls[0]
    if first == 'X':
        return [10] + frame(balls[1:], scores)
    elif balls[0] == '-':
        return [0] + frame(balls[1:], scores)
    elif first in ['1', '2', '3', '4', '5', '6', '7', '8', '9']:
        if len(balls) > 1:
            if balls[1] == '/':
                return [first, 10 - first] + frame(balls[2:], scores)
            else:
                return [first, balls[1]] + frame(balls[2:], scores)
        else:
            return [first]
    else:
        return [0] + frame(balls[1:], scores)

def state(frame, scores):
    if not frame:
        return []
    first = frame[:2]
    rest = frame[2:]
    if first == [10, 0]:
        rest[0:2] = [0, 0]
        return [10 + 10] + state(rest, scores + 30)
    elif first[0] == 10:
        return [10] + state(rest, scores + 10)
    elif sum(first) == 10:
        return [10] + state(rest, scores + 10)
    else:
        return [sum(first)] + state(rest, scores + sum(first))

if __name__ == '__main__':
    balls = input()
    print(bowling(balls))
