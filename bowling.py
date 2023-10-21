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
    def bowlingScore(S):
        def nexRound(y, p):
            while S[y] == 'X':
                p = p + 10 + bowlMag(y + 1) + bowlMag(y + 2)
                y = y + 1
            p = p + bowlMag(y)
            y = y + 1
            if S[y] == '/':
                p = p + bowlMag(y + 1)
                y = y + 2
            else:
                y = y + 1
            return y, p

        def totRound(y, p):
            while S[y] == 'X':
                p = p + bowlMag(y) + bowlMag(y + 1)
                y = y + 2
            if S[y] == '/':
                p = p + bowlMag(y + 1)
            else:
                p = p + bowlMag(y) + bowlMag(y + 1)
                y = y + 2
            return y, p

        def bowlMag(i):
            return int(S[i]) if S[i] != 'X' and S[i] != '/' else 10

        tot, pos = 0, 0
        if len(S) != 21:
            raise ValueError("Not enough rounds. Expected 21, found " + str(len(S)))
        for j in range(10):
            pos, tot = nexRound(pos, tot) if j < 9 else totRound(pos, tot)
        return tot

    def test_bowlingScore():
        assert bowlingScore('XXXXXXXXXXXX') == 300
        assert bowlingScore('9-9-9-9-9-9-9-9-9-9-') == 90
        assert bowlingScore('5/5/5/5/5/5/5/5/5/5/5') == 150
        assert bowlingScore('011245/-5/4/X1/35-') == 70
        assert bowlingScore('X7/729/XXX236/7/3') == 168
