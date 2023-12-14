
[SEED]
def solve(input_path):
    pass
[/SEED]
"""
import os
import sys
import numpy as np
import math
import datetime
import collections
import itertools
import queue
import re
def coin_sums(cents):
    c = [0, 0, 0, 0] # coins of type: quarters, dimes, nickles, pennies
    r = cents
    while True:
        if r == 0:
            break
        if r >= 25 and c[0] != math.floor(r / 25):
            c[0] += 1
            r -= 25
            continue
        elif r >= 10 and c[1] != math.floor(r / 10):
            c[1] += 1
            r -= 10
            continue
        elif r >= 5 and c[2] != math.floor(r / 5):
            c[2] += 1
            r -= 5
            continue
        else:
            c[3] = r
    return tuple(c)
if __name__ == "__main__":
    # DO NOT MODIFY CODES HERE
    # DO NOT MODIFY CODES HERE
    # DO NOT MODIFY CODES HERE
    # It's important and repeat three times
    os.environ['OUTPUT_PATH'] = './result/submission.txt'

    try:
        _i = sys.stdin.read()
        assert len(_i) >= 1
    except :
        print("Error occurred while reading from STDIN")
        sys.exit(1)

    lines = _i.split('\n')
    assert len(lines) == int(lines[-1]) + 1

    f = open('{0}'.format(os.environ['OUTPUT_PATH']), 'w')

    for i in range(len(lines)-1):
        try:
            cents = int(lines[i])
            assert cents >= 0
        except :
            print("Invalid value for number of coins")
            sys.exit(1)

        result = coin_sums(cents)

        f.write(' '.join(map(str, result)) + '\n')
    f.close()
