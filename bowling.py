
[SEED]
#<COMMON_CODE>
import sys
import numpy as np
import itertools
def get_score(frames):
    score = 0
    for i in range(len(frames)):
        if frames[i] == 'X':
            score += 10 + get_strike_bonus(frames, i) + get_spare_bonus(frames, i)
        elif frames[i] == '/':
            score += 10 - get_strike_bonus(frames, i) - get_spare_bonus(frames, i)
        else:
            score += int(frames[i]) + get_strike_bonus(frames, i) + get_spare_bonus(frames, i)
    return score
def get_strike_bonus(frames, i):
    if i < len(frames) - 2 and frames[i+1] == 'X':
        if i < len(frames) - 4 and frames[i+3] == 'X':
            return 10 + int(frames[i+2])
        else:
            return 10 + int(frames[i+2]) + int(frames[i+3])
    else:
        return 0
def get_spare_bonus(frames, i):
    if i < len(frames) - 2 and frames[i+1] == '/':
        return int(frames[i+2])
    else:
        return 0
#</COMMON_CODE>
"""
Code below is your starting point.
"""
def get_score(frames):
    score = 0
    for i in range(len(frames)):
        if frames[i] == 'X':
            score += 10 + get_strike_bonus(frames, i) + get_spare_bonus(frames, i)
        elif frames[i] == '/':
            score += 10 - get_strike_bonus(frames, i) - get_spare_bonus(frames, i)
        else:
            score += int(frames[i]) + get_strike_bonus(frames, i) + get_spare_bonus(frames, i)
    return score
def get_strike_bonus(frames, i):
    if i < len(frames) - 2 and frames[i+1] == 'X':
        if i < len(frames) - 4 and frames[i+3] == 'X':
            return 10 + int(frames[i+2])
        else:
            return 10 + int(frames[i+2]) + int(frames[i+3])
    else:
        return 0
def get_spare_bonus(frames, i):
    if i < len(frames) - 2 and frames[i+1] == '/':
        return int(frames[i+2])
    else:
        return 0
#<SOLUTION>
def bowling(frames):
    return get_score(frames)
#</SOLUTION>
"""
Code above is your starting point.
"""
#<TESTCASES>
tests = []
tests.append({
    'input': ('XXXXXXXXXXXX', ),
    'output': 300
})
tests.append({
    'input': ('5/5/5/5/5/5/5/5/5/5/5', ),
    'output': 150
})
tests.append({
    'input': ('7115XXX548/279-X53', ),
    'output': 145
})
tests.append({
    'input': ('532/4362X179-41447/5', ),
    'output': 100
})
#</TESTCASES>
def main():
    for t in tests:
        print('Parsing Input:', t['input'])
        print('Solution Output:', bowling(t['input']))
        print('Expected Output:', t['output'])

if __name__ == '__main__':
  main()
