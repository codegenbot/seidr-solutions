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

Consider n sides and m sides where n>m. There are (n+m)C(m): (n+m)*(n+m-1)*(n+m-2)*...*(n+1)/m! possible outcomes. Let p(n,m) be (n+m)C(m).
Among p(n,m) possibilities, (n-1)C(m): (n-1)*(n-2)*...*(n-m)/m! are the cases where Peter rolls the smallest value possible and Colin rolls smaller values, which won't satisfy Peter>Colin.
Among p(n,m) possibilities, (n)C(m-1): nC(m-1) are the cases where Colin rolls the largest value possible and Peter rolls smaller values, which won't satisfy Peter>Colin.
Among p(n,m) possibilities, (m-1) are the cases where Peter rolls the smallest value possible and Colin rolls larger values, which will satisfy Peter>Colin.
Among p(n,m) possibilities, (n) are the cases where Colin rolls the largest value possible and Peter rolls larger values, which will satisfy Peter>Colin.
So, P(Peter>Colin) = (p(n,m)-(n-1)C(m)-(n)C(m-1)-(m-1))/(p(n,m)) = (n+m)/(n+m-1) - (n-m)/(n+m-1) = (n+m)/(n+m-1) - 1/(n+m-1) = m/(n+m-1).
"""
if __name__ == '__main__':
