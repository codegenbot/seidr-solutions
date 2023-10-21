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
1
0
output:
1
0
0

input:
1
10
output:
1
10
0

input:
1
100
output:
1
100
0

input:
1
1000
output:
1
1000
0

input:
1
10000
output:
1
10000
0

"""

def cut(input):
    if len(input) == 1:
        return input
    if len(input) == 2:
        return input
    if len(input) == 3:
        return input
    if len(input) == 4:
        return input
    if len(input) == 5:
        return input
    if len(input) == 6:
        return input
    if len(input) == 7:
        return input
    if len(input) == 8:
        return input
    if len(input) == 9:
        return input
    if len(input) == 10:
        return input
    if len(input) == 11:
        return input
    if len(input) == 12:
        return input
    if len(input) == 13:
        return input
    if len(input) == 14:
        return input
    if len(input) == 15:
        return input
    if len(input) == 16:
        return input
    if len(input) == 17:
        return input
    if len(input) == 18:
        return input
    if len(input) == 19:
        return input
    if len(input) == 20:
        return input
    if len(input) == 21:
        return input
    if len(input) == 22:
        return input
    if len(input) == 23:
        return input
    if len(input) == 24:
        return input
    if len(input) == 25:
        return input
    if len(input) == 26:
        return input
    if len(input) == 27:
        return input
    if len(input) == 28:
        return input
    if len(input) == 29:
        return input
    if len(input) == 30:
        return input
    if len(input) == 31:
        return input
    if len(input) == 32:
        return input
    if len(input) == 33:
        return input
    if len(input) == 34:
        return input
    if len(input) == 35:
        return input
    if len(input) == 36:
        return input
    if len(input) == 37:
        return input
    if len(input) == 38:
        return input
    if len(input) == 39:
        return input
    if len(input) == 40:
        return input
    if len(input) == 41:
        return input
    if len(input) == 42:
        return input
    if len(input) == 43:
        return input
    if len(input) == 44:
        return input
    if len(input) == 45:
        return input
    if len(input) == 46:
        return input
    if len(input) == 47:
        return input
    if len(input) == 48:
        return input
    if len(input) == 49:
        return input
    if len(input) == 50:
        return input
    if len(input) == 51:
        return input
    if len(input) == 52:
        return input
    if len(input) == 53:
        return input
    if len(input) == 54:
        return input
    if len(input) == 55:
        return input
    if len(input) == 56:
        return input
    if len(input) == 57:
        return input
    if len(input) == 58:
        return input
    if len(input) == 59:
        return input
    if len(input) == 60:
        return input
    if len(input) == 61:
        return input
    if len(input) == 62:
        return input
    if len(input) == 63:
        return input
    if len(input) == 64:
        return input
    if len(input) == 65:
        return input
    if len(input) == 66:
        return input
    if len(input) == 67:
        return input
    if len(input) == 68:
        return input
    if len(input) == 69:
        return input
    if len(input) == 70:
        return input
    if len(input) == 71:
        return input
    if len(input) == 72:
        return input
    if len(input) == 73:
        return input
    if len(input) == 74:
        return input
    if len(input) == 75:
        return input
    if len(input) == 76:
        return input
    if len(input) == 77:
        return input
    if len(input) == 78:
        return input
    if len(input) == 79:
        return input
    if len(input) == 80:
        return input
    if len(input) == 81:
        return input
    if len(input) == 82:
        return input
    if len(input) == 83:
        return input
    if len(input) == 84:
        return input
    if len(input) == 85:
        return input
    if len(input) == 86:
        return input
    if len(input) == 87:
        return input
    if len(input) == 88:
        return input
    if len(input) == 89:
        return input
    if len(input) == 90:
        return input
    if len(input) == 91:
        return input
    if len(input) == 92:
        return input
    if len(input) == 93:
        return input
    if len(input) == 94:
        return input
    if len(input) == 95:
        return input
    if len(input) == 96:
        return input
    if len(input) == 97:
        return input
    if len(input) == 98:
        return input
    if len(input) == 99:
        return input
    if len(input) == 100:
        return input

if __name__ == '__main__':
    input = [1,10,100,1000,10000]
    print(cut(input))
