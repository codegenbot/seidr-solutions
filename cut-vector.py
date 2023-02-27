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
Given a vector of positive integers, ﬁnd the spot where, if you cut the vector, the numbers on both sides are either equal, or the diﬀerence is as small as possible. Return the two resulting subvectors as two outputs.
For example,
input:
2
2
output:
1\n2\n1\n2

input:
2
129
output:
1\n2\n1\n129

input:
2
130
output:
1\n2\n1\n130

input:
2
131
output:
1\n2\n1\n131

input:
2
132
output:
1\n2\n1\n132

"""
def get_subvectors(vector):
    if len(vector) == 1:
        return vector
    if len(vector) == 2:
        return vector[0], vector[1]
    if len(vector) == 3:
        return vector[0], vector[1], vector[2]
    if len(vector) == 4:
        return vector[0], vector[1], vector[2], vector[3]
    if len(vector) == 5:
        return vector[0], vector[1], vector[2], vector[3], vector[4]
    if len(vector) == 6:
        return vector[0], vector[1], vector[2], vector[3], vector[4], vector[5]
    if len(vector) == 7:
        return vector[0], vector[1], vector[2], vector[3], vector[4], vector[5], vector[6]
    if len(vector) == 8:
        return vector[0], vector[1], vector[2], vector[3], vector[4], vector[5], vector[6], vector[7]
    if len(vector) == 9:
        return vector[0], vector[1], vector[2], vector[3], vector[4], vector[5], vector[6], vector[7], vector[8]
    if len(vector) == 10:
        return vector[0], vector[1], vector[2], vector[3], vector[4], vector[5], vector[6], vector[7], vector[8], vector[9]
    if len(vector) == 11:
        return vector[0], vector[1], vector[2], vector[3], vector[4], vector[5], vector[6], vector[7], vector[8], vector[9], vector[10]
    if len(vector) == 12:
        return vector[0], vector[1], vector[2], vector[3], vector[4], vector[5], vector[6], vector[7], vector[8], vector[9], vector[10], vector[11]
    if len(vector) == 13:
        return vector[0], vector[1], vector[2], vector[3], vector[4], vector[5], vector[6], vector[7], vector[8], vector[9], vector[10], vector[11], vector[12]
    if len(vector) == 14:
        return vector[0], vector[1], vector[2], vector[3], vector[4], vector[5], vector[6], vector[7], vector[8], vector[9], vector[10], vector[11], vector[12], vector[13]
    if len(vector) == 15:
        return vector[0], vector[1], vector[2], vector[3], vector[4], vector[5], vector[6], vector[7], vector[8], vector[9], vector[10], vector[11], vector[12], vector[13], vector[14]
    if len(vector) == 16:
        return vector[0], vector[1], vector[2], vector[3], vector[4], vector[5], vector[6], vector[7], vector[8], vector[9], vector[10], vector[11], vector[12], vector[13], vector[14], vector[15]
    if len(vector) == 17:
        return vector[0], vector[1], vector[2], vector[3], vector[4], vector[5], vector[6], vector[7], vector[8], vector[9], vector[10], vector[11], vector[12], vector[13], vector[14], vector[15], vector[16]
    if len(vector) == 18:
        return vector[0], vector[1], vector[2], vector[3], vector[4], vector[5], vector[6], vector[7], vector[8], vector[9], vector[10], vector[11], vector[12], vector[13], vector[14], vector[15], vector[16], vector[17]
    if len(vector) == 19:
        return vector[0], vector[1], vector[2], vector[3], vector[4], vector[5], vector[6], vector[7], vector[8], vector[9], vector[10], vector[11], vector[12], vector[13], vector[14], vector[15], vector[16], vector[17], vector[18]
    if len(vector) == 20:
        return vector[0], vector[1], vector[2], vector[3], vector[4], vector[5], vector[6], vector[7], vector[8], vector[9], vector[10], vector[11], vector[12], vector[13], vector[14], vector[15], vector[16], vector[17], vector[18], vector[19]
    if len(vector) == 21:
        return vector[0], vector[1], vector[2], vector[3], vector[4], vector[5], vector[6], vector[7], vector[8], vector[9], vector[10], vector[11], vector[12], vector[13], vector[14], vector[15], vector[16], vector[17], vector[18], vector[19], vector[20]
    if len(vector) == 22:
        return vector[0], vector[1], vector[2], vector[3], vector[4], vector[5], vector[6], vector[7], vector[8], vector[9], vector[10], vector[11], vector[12], vector[13], vector[14], vector[15], vector[16], vector[17], vector[18], vector[19], vector[20], vector[21]
    if len(vector) == 23:
        return vector[0], vector[1], vector[2], vector[3], vector[4], vector[5], vector[6], vector[7], vector[8], vector[9], vector[10], vector[11], vector[12], vector[13], vector[14], vector[15], vector[16], vector[17], vector[18], vector[19], vector[20], vector[21], vector[22]
    if len(vector) == 24:
        return vector[0], vector[1], vector[2], vector[3], vector[4], vector[5], vector[6], vector[7], vector[8], vector[9], vector[10], vector[11], vector[12], vector[13], vector[14], vector[15], vector[16], vector[17], vector[18], vector[19], vector[20], vector[21], vector[22], vector[23]
    if len(vector) == 25:
        return vector[0], vector[1], vector[2], vector[3], vector[4], vector[5], vector[6], vector[7], vector[8], vector[9], vector[10], vector[11], vector[12], vector[13], vector[14], vector[15], vector[16], vector[17], vector[18], vector[19], vector[20], vector[21], vector[22], vector[23], vector[24]


if __name__ == '__main__':
    for line in sys.stdin:
        vector = [int(x) for x in line.split()]
        subvectors = get_subvectors(vector)
        for subvector in subvectors:
            print(subvector)
