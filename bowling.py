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
    lst = ['XXXXXXXXXXXX','5/5/5/5/5/5/5/5/5/5/5','7115XXX548/279-X53','532/4362X179-41447/5']
    for line in lst:
        print(line)
        score = 0
        for index,char in enumerate(line):
            if char == 'X':
                score += 10
                if (index+1) < len(line) and line[index+1] == 'X':
                    score += 10
                    if (index+2) < len(line) and line[index+2] == 'X':
                        score += 10
                    else:
                        score += int(line[index+2])
                else:
                    if (index+2) < len(line) and line[index+2] == '/':
                        score += 10
                    else:
                        score += int(line[index+1]) + int(line[index+2])
            elif char == '-':
                score += 0
            elif char == '/':
                score += 10
                if (index+1) < len(line) and line[index+1] == 'X':
                    score += 10
                else:
                    score += int(line[index+1])
            else:
                score += int(char)
        print(score)
