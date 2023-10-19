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

logic:(1) don't insert to the end of seq, this is not proper, becase the operation of seq will surely enlarge the diff of last two element.
      (2) insert to the begin of front seq or the end of back seq, you don't know actually but you can know it will not enlarge the different (until 0 for fron seq).
(3) but insert to specific position to make loop shorter


"""
if __name__ == '__main__':
