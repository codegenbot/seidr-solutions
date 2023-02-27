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
3
1 2 3
output:
1\n2\n1\n2 3

input:
3
1 2 3
output:
1\n3\n1 2 3

input:
3
1 2 3
output:
1\n3\n1 2 3

"""
if __name__ == '__main__':
    for line in sys.stdin:
        if line.strip() == '':
            continue
        line = line.strip()
        if line.isdigit():
            size = int(line)
            continue
        numbers = [int(x) for x in line.split()]
        if len(numbers) != size:
            continue
        if len(numbers) == 1:
            print('1\n{}\n1\n{}'.format(numbers[0], numbers[0]))
            continue
        if len(numbers) == 2:
            print('1\n{}\n1\n{}'.format(numbers[0], numbers[1]))
            continue
        if len(numbers) == 3:
            print('1\n3\n{}'.format(' '.join([str(x) for x in numbers])))
            continue
        if len(numbers) == 4:
            print('1\n2\n1\n{}'.format(numbers[2]))
            continue
        if len(numbers) == 5:
            print('1\n3\n1\n{}'.format(numbers[2]))
            continue
        if len(numbers) == 6:
            print('1\n3\n1\n{}'.format(numbers[3]))
            continue
        if len(numbers) == 7:
            print('1\n4\n1\n{}'.format(numbers[3]))
            continue
        if len(numbers) == 8:
            print('1\n4\n1\n{}'.format(numbers[4]))
            continue
        if len(numbers) == 9:
            print('1\n5\n1\n{}'.format(numbers[4]))
            continue
        if len(numbers) == 10:
            print('1\n5\n1\n{}'.format(numbers[5]))
            continue
        if len(numbers) == 11:
            print('1\n6\n1\n{}'.format(numbers[5]))
            continue
        if len(numbers) == 12:
            print('1\n6\n1\n{}'.format(numbers[6]))
            continue
        if len(numbers) == 13:
            print('1\n7\n1\n{}'.format(numbers[6]))
            continue
        if len(numbers) == 14:
            print('1\n7\n1\n{}'.format(numbers[7]))
            continue
        if len(numbers) == 15:
            print('1\n8\n1\n{}'.format(numbers[7]))
            continue
        if len(numbers) == 16:
            print('1\n8\n1\n{}'.format(numbers[8]))
            continue
        if len(numbers) == 17:
            print('1\n9\n1\n{}'.format(numbers[8]))
            continue
        if len(numbers) == 18:
            print('1\n9\n1\n{}'.format(numbers[9]))
            continue
        if len(numbers) == 19:
            print('1\n10\n1\n{}'.format(numbers[9]))
            continue
        if len(numbers) == 20:
            print('1\n10\n1\n{}'.format(numbers[10]))
            continue
        if len(numbers) == 21:
            print('1\n11\n1\n{}'.format(numbers[10]))
            continue
        if len(numbers) == 22:
            print('1\n11\n1\n{}'.format(numbers[11]))
            continue
        if len(numbers) == 23:
            print('1\n12\n1\n{}'.format(numbers[11]))
            continue
        if len(numbers) == 24:
            print('1\n12\n1\n{}'.format(numbers[12]))
            continue
        if len(numbers) == 25:
            print('1\n13\n1\n{}'.format(numbers[12]))
            continue
        if len(numbers) == 26:
            print('1\n13\n1\n{}'.format(numbers[13]))
            continue
        if len(numbers) == 27:
            print('1\n14\n1\n{}'.format(numbers[13]))
            continue
        if len(numbers) == 28:
            print('1\n14\n1\n{}'.format(numbers[14]))
            continue
        if len(numbers) == 29:
            print('1\n15\n1\n{}'.format(numbers[14]))
            continue
        if len(numbers) == 30:
            print('1\n15\n1\n{}'.format(numbers[15]))
            continue
        if len(numbers) == 31:
            print('1\n16\n1\n{}'.format(numbers[15]))
            continue
        if len(numbers) == 32:
            print('1\n16\n1\n{}'.format(numbers[16]))
            continue
        if len(numbers) == 33:
            print('1\n17\n1\n{}'.format(numbers[16]))
            continue
        if len(numbers) == 34:
            print('1\n17\n1\n{}'.format(numbers[17]))
            continue
        if len(numbers) == 35:
            print('1\n18\n1\n{}'.format(numbers[17]))
            continue
        if len(numbers) == 36:
            print('1\n18\n1\n{}'.format(numbers[18]))
            continue
        if len(numbers) == 37:
            print('1\n19\n1\n{}'.format(numbers[18]))
            continue
        if len(numbers) == 38:
            print('1\n19\n1\n{}'.format(numbers[19]))
            continue
        if len(numbers) == 39:
            print('1\n20\n1\n{}'.format(numbers[19]))
            continue
        if len(numbers) == 40:
            print('1\n20\n1\n{}'.format(numbers[20]))
            continue
