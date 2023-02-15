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
    while True:
        try:
            line = [i.strip() for i in input().split()]
            line = line[0]
            score = 0 
            scor = 0
            if line == 'XXXXXXXXXXXX':
                print(300)
                continue
            for i in range(len(line)):
                if line[i] != 'X' and line[i] != '-'  and line[i] != '/':
                    scor += int(line[i])
            score += scor 
            for i in range(len(line)):
                if line[i] == 'X':
                    if line[i+1] == 'X':
                        score += 20
                    else:
                        score += 10
            for i in range(len(line)):
                if line[i] == '-':
                    score += 0
            for i in range(len(line)):
                if line[i] == '/':
                    if line[i+1] == 'X':
                        score += 10
                    else:
                        score += (int(line[i+1])+10)
            print(score)
        except:
            break
