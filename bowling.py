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

framePoint = [0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0]


def solution(input):
    if len(input) <= 0 or len(input) > 21:
        return 0
    else:
        for c in input:
            if c not in ['X','5','4','3','2','1','7','8','9','0','/','-']:
                print c
                return 0

        i = 0;
        while i < len(input):
            c = input[i]
            if c == 'X':
                if i == 0:
                    framePoint[0] = 10
                    framePoint[1] = 10
                else:
                    #framePoint[i + 1 + i/2] = framePoint[i - 1 + i/2] + 10
                    framePoint[i + 1 + i / 2] = 10
                    framePoint[i + 2 + i / 2] = 10
                i += 1
            else:
                if c == '/':
                    #framePoint[i + 1 + i/2] = framePoint[i - 1 + i/2] + 10
                    framePoint[i + 1 + i/2] = 10 - int(input[i - 1])
                    i += 1
                elif c == '-':
                    framePoint[i + i / 2] = 0
                    i += 1
                else:
                    framePoint[i + i / 2] = int(c)
                    i += 1

        return sum(framePoint)


if __name__ == '__main__':
    start = datetime.datetime.now()
    testCase = "XXXXXXXXXXXX"
    #testCase = "9-9-9-9-9-9-9-9-9-9-"
    print solution(testCase)
    end = datetime.datetime.now()
    print end - start
