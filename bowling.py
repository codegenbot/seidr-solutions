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
    str = '532/4362X179-41447/5'
    res = 0
    score = []
    for i in range(len(str)):
        if str[i] == 'X':
            score.append(10)
            if i < len(str)-2:
                if str[i+1] == 'X':
                    score.append(10)
                    if str[i+2] == 'X':
                        score.append(10)
                    else:
                        score.append(int(str[i+2]))
                else:
                    score.append(int(str[i+1]))
                    if str[i+2] == '/':
                        score.append(10-int(str[i+1]))
                    else:
                        score.append(int(str[i+2]))
                break
        elif str[i] == '-':
            score.append(0)
        elif str[i] == '/':
            score.append(10-int(str[i-1]))
        else:
            score.append(int(str[i]))
    for i in range(0,len(score),2):
        if i == len(score)-3:
            res += score[i]+score[i+1]+score[i+2]
        elif i == len(score)-2:
            res += score[i]+score[i+1]
        elif i == len(score)-1:
            res += score[i]
        else:
            res += score[i]+score[i+1]+score[i+2]
    print(res)
