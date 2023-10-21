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
def bowling(input):
    score = input.replace('-', '0')
    score = score.replace('/', '10')[:-1]
    arr = (int(x) for x in score)
    sum = 0
    flag = 0
    for i in arr:
        sum += i
        flag += 1
        if flag % 2 != 0 and i == 10:
            sum += i
    return sum


# def bowling(input):
#     score = 0
#     for i, x in enumerate(input[:-1]):
#         score += int(x) if x.isdigit() else 10
#         if x == 'X' or x == '/':
#             score += int(input[i+1])
#             if x == '/':
#                 if input[i+2].isdigit():
#                     score += int(input[i+2])
#                 elif input[i+2] == 'X':
#                     score += 10
#             elif x == 'X' and input[i+2] == '/':
#                 score += 10
#     score += input.count('X') * input[-1].count('X')
#     return score

if __name__ == '__main__':
    # print bowling("XXXXXXXXXXXX")
    # assert bowling("XXXXXXXXXXXX") == 300
    # assert bowling("9-9-9-9-9-9-9-9-9-9-") == 90
    # assert bowling("5/5/5/5/5/5/5/5/5/5/5") == 150
    # assert bowling("7115XXX548/279-X53") == 145
    # assert bowling("532/4362X179-41447/5") == 100
    # assert bowling("X3/5-8/3576X036/X") == 110
    # assert bowling("X3/X6-8/6") == 150
    assert bowling("63X-5/46") == 85
    assert bowling("3/X7/7/X5") == 155
    assert bowling("X7/72XXX") == 177
    assert bowling("7/XXX9-4/11") == 180
    assert bowling("5/X3/X7-9/") == 195
    assert bowling("X9-3/X7/XXX") == 201
    assert bowling("XXXXXXXXXX9") == 299
    assert bowling("X63/6-3/XXX") == 185
    assert bowling("7/36X2/-9/XX") == 162
    assert bowling("8/XX19/X85-/") == 197
    assert bowling("5/X/7X3-7/4") == 170
    assert bowling("X-/XX9-7/XX") == 170
    assert bowling("7/536-8/XXX") == 183
    assert bowling("X-/XX9-7/XX") == 170
    assert bowling("5/3/X23-/X7") == 152
    assert bowling("X-/X/XX9-71") == 161
    #assert bowling("X/7X9-X-X-2") == 166
    #assert bowling("9/XX9/5/9-/") == 199
    #assert bowling("5/X-9/X7/XXX") == 197
