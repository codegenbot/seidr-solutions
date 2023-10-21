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
# 1
def score(line):
    # sum score number
    sum = 0
    # spare or strike flag
    spare = 0
    strike = 0
    # spare score
    spare_score = 0
    # strike score
    strike_score = 0
    # bonus sum count
    bonus_cnt = 0

    for i,c in enumerate(line):
        if c == 'X':
            # X : score 10 + bonus score
            sum += 10 + spare_score + strike_score
            # reset score
            spare_score = strike_score = 0
            # strike flag
            strike = 1
            # bonus count decrease
            if bonus_cnt:
                bonus_cnt -= 1
        # spare \ strike
        elif c == '/':
            # / : score 10 - previous score + bonus score
            sum += 10 - int(line[i-1]) + spare_score + strike_score
            # reset score
            spare_score = strike_score = 0
            # spare flag
            spare = 1
            # bonus count decrease
            if bonus_cnt:
                bonus_cnt -= 1
        # other
        else:
            # 0~9 : score = c
            sum += int(c)
            # reset score
            spare_score = strike_score = 0
        # strike
        if strike:
            # bonus score
            strike_score += int(c)
            # bonus count
            bonus_cnt += 1
            # reset strike flag
            if bonus_cnt == 2:
                strike = 0
        # spare
        if spare:
            # bonus score
            spare_score += int(c)
            # bonus count
            bonus_cnt += 1
            # reset spare flag
            if bonus_cnt == 1:
                spare = 0
    return sum
# 2
def score(line):
    it = iter(line)
    frame = lambda: it.next() if not is_frame_score() else sum(map(int, islice(it, 2)))
    minuses = enumerate(line)
    minuses = islice(minuses, None, None, 2)
    minuses = ifilter(lambda x: x[1] == '-', minuses)
    minuses = imap(lambda x: x[0], minuses)
    while 1:
        try:
            frame_score = frame()
            if frame_score != 10:
                yield frame_score
            else:
                try:
                    yield 10 + next(it)
                except StopIteration:
                    break
                if next(it) == '/':
                    yield 10
                elif next(it) == 'X':
                    try:
                        yield 10 + next(it) + next(it)
                    except StopIteration:
                        break
        except StopIteration:
            break
    for idx in minuses:
        yield 0
    return sum(score(line))
# 3
def score(line):
    return calc_score(line)
def calc_score(line):
        # sum score number
    sum = 0
    # spare or strike flag
    spare = 0
    strike = 0
    # spare score
    spare_score = 0
    # strike score
    strike_score = 0
    # bonus sum count
    bonus_cnt = 0

    for i,c in enumerate(line):
        if c == 'X':
            # X : score 10 + bonus score
            sum += 10 + spare_score + strike_score
            # reset score
            spare_score = strike_score = 0
            # strike flag
            strike = 1
            # bonus count decrease
            if bonus_cnt:
                bonus_cnt -= 1
        # spare \ strike
        elif c == '/':
            # / : score 10 - previous score + bonus score
            sum += 10 - int(line[i-1]) + spare_score + strike_score
            # reset score
            spare_score = strike_score = 0
            # spare flag
            spare = 1
            # bonus count decrease
            if bonus_cnt:
                bonus_cnt -= 1
        # other
        else:
            # 0~9 : score = c
            sum += int(c)
            # reset score
            spare_score = strike_score = 0
        # strike
        if strike:
            # bonus score
            strike_score += int(c)
            # bonus count
            bonus_cnt += 1
            # reset strike flag
            if bonus_cnt == 2:
                strike = 0
        # spare
        if spare:
            # bonus score
            spare_score += int(c)
            # bonus count
            bonus_cnt += 1
            # reset spare flag
            if bonus_cnt == 1:
                spare = 0
    return sum
# 4
if __name__ == '__main__':
    # Test 1
    line = 'XXXXXXXXXXXX'
    result = score(line)
    assert result == 300, "Test 1 Fail, result is %d" % result
    # Test 2
    line = '5/5/5/5/5/5/5/5/5/5/5'
    result = score(line)
    assert result == 150, "Test 2 Fail, result is %d" % result
    # Test 3
    line = '7115XXX548/279-X53'
    result = score(line)
    assert result == 145, "Test 3 Fail, result is %d" % result
    # Test 4
    line = '532/4362X179-41447/5'
    result = score(line)
    assert result == 100, "Test 4 Fail, result is %d" % result
