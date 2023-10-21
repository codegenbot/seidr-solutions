import os
import sys
import numpy as np
import math
import datetime
import collections
import itertools
import queue
import re

class Bowling(object):
    def parse_frame(self, s):
        if s == 'XXX':
            yield 10, 'X'
            return
        if s[0] == 'X':
            yield 10, s[0]
            s = s[1:]
        if s[1] == '/':
            yield 10, '/'
            s = s[2:]
        if s[1] == '-':
            yield int(s[0]), '-'
            s = s[2:]
        yield int(s[0]) + int(s[1]), '2'
        return s[2:]

    def score(self, s):
        total = 0
        while s:
            p1, p2 = list(self.parse_frame(s))[:2]
            s = p2
            total += p1
            if p2 == 'X':
                total += 10 + self.parse_frame(s).next()[0]
            if p2 == '/':
                total += 10 - p1
        return total
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
