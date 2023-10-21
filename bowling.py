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
def score_10_pin_bowling(input):
    scors = {'X':10,'-':0,'/':0}
    for i in range(9):
        scors[str(i+1)] = i+1
    ans = 0
    for i in range(10):
        T = input[i*2:i*2+2]
        ans += scors[T[0]]
        if T[0] == 'X':
            if i != 9:
                if input[i*2+2] == 'X':
                    ans += 10
                    if input[i*2+4] == 'X':
                        ans += 10
                    else:
                        ans += scors[input[i*2+4]]
                else:
                    ans += scors[input[i*2+2]]
        else:
            if T[1] == '/':
                if i != 9:
                    ans += 10
                    ans += scors[input[i*2+2]]
                else:
                    ans += 10
    return ans

if __name__ == '__main__':
    input = input()
    print(score_10_pin_bowling(input))
