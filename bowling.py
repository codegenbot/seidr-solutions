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

# def bowling(score):
#     score = score.replace("-","0")
#     score = score.replace("-","0")
#     score = score.replace("X","10")
#     score = score.replace("/","")
#     score = score.replace("-","0")
#     score = [int(x) for x in score]
#     score = np.array(score)
#     score = score.reshape(10,2)#
#     score[:,1] += score[:,0]
#     for i,x in enumerate(score):
#         if x[0] == 10:
#             if i == 9:
#                 score[i,1] += score[i,0]
#             else:
#                 score[i,1] += score[i+1,0]
#                 if x[1] == 20:
#                     score[i,1] += score[i+1,0]
#     return sum(score[:,1])

def bowling(score):
    score = [x for x in score]
    score = [x if x != 'X' else 10 for x in score]
    score = [x if x != '-' else 0 for x in score]
    score = [x if x != '/' else 10-int(score[i-1]) for i,x in enumerate(score)]
    score = [int(x) for x in score]
    score = np.array(score).reshape(10,2)
    score[:,1] += score[:,0]#
    for i in range(9):
        if score[i,0] == 10:
            score[i,1] += score[i+1,0]
            if score[i+1,0] == 10:
                score[i,1] += score[i+2,0]
    return sum(score[:,1])#

if __name__ == '__main__':
    print(bowling(input()))
