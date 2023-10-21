import os
import sys
import numpy as np
import math
import datetime
import collections
import itertools
import queue
import re
from typing import List
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
def TenPin(bowling: List[str]) -> int:
    l = []
    for i in bowling:
        if i in '0123456789':
            l.append(int(i))
        else:
            l.append({'/':len(l) + 1, 'X':len(l) + 2, '-':0}.get(i))
    score = 0
    for j in range(len(l) - 2):
        if l[j] == 10:
            score += 10 + l[j + 1] + l[j + 2]
        elif l[j] + l[j + 1] == 10:
            score += 10 + l[j + 2]
        else:
            score += l[j] + l[j + 1]
    return score
if __name__ == '__main__':
    input_1 = "XXXXXXXXXXXX"
    input_2 = "5/5/5/5/5/5/5/5/5/5/5"
    input_3 = "7115XXX548/279-X53"
    input_4 = "532/4362X179-41447/5"
    print("The score is {0:d}".format(TenPin(input_4)))
