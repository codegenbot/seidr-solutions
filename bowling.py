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
def bowling(frames):
    """
    >>> bowling("--------------------")
    0
    # >>> bowling("XXXXXXXXXXXX")
    # 300
    # >>> bowling("9-9-9-9-9-9-9-9-9-9-")
    # 90
    # >>> bowling("5/5/5/5/5/5/5/5/5/5/5")
    # 150
    # >>> bowling("7115XXX548/279-X53")
    # 145
    # >>> bowling("532/4362X179-41447/5")
    # 100
    """
    score = 0
    for i in range(0, len(frames), 2):
        if frames[i] == 'X':
            score += 10 + (int(frames[i+2]) if frames[i+2] != 'X' else 10) + (int(frames[i+3]) if frames[i+3] != '/' else 10 - int(frames[i+1]))
        elif frames[i+1] == '/':
            score += 10 + (int(frames[i+2]) if frames[i+2] != 'X' else 10)
        elif frames[i+1] == '-':
            score += int(frames[i])
        else:
            score += int(frames[i]) + int(frames[i+1])
    return score


if __name__ == '__main__':
    import doctest
    doctest.testmod()
