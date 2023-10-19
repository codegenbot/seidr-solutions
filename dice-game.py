import sys
import numpy as np
import math
import datetime
import collections
import itertools
import queue
import re
"""
Peter has an n-sided die and Colin has an m-sided die. If they both roll their dice at the same time, return the probability that Peter rolls strictly higher than Colin.
For example,
input:
1
2
output:
0.0
input:
2
1
output:
0.5
input:
99
100
output:
0.49
input:
100
99
output:
0.5
input:
1
100
output:
0.0
"""
if __name__ == '__main__':
        if N > M:
            print 1
        elif N == M:
            count = 0.0
            for i in range(M):
                count += 1/pow(2, 1 + i)
            print str(1 - count)
        else:
            sum  = 0
            all = 2 ** (M + N - 1)
            for i in range(1, M + 1):
                m = 1
                n = 0
                line = 1
               # for j in range(N - 1):
               #     if line > M - i + 1:
                 #       line -= line % pow(2, m)
                 #       n += m + 1
                 #       if m % 2 == 1:
                 #           m += 1
                 #   else:
                 #       line *= 2
                 #       m += 1
                sum += pow(2, n - N + 1) * i
            print sum / all
