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
"""
if __name__ == '__main__':
    def prob(n,m):
        n_list = []
        m_list = []
        for i in range(n+1):
            n_list.append(i)
        for j in range(m+1):
            m_list.append(j)
        count = 0
        for n_number in n_list:
            for m_number in m_list:
                if n_number > m_number:
                    count += 1
        return count/((n+1)*(m+1))
    print(prob(1,2))
    print(prob(2,1))
    print(prob(99,100))
    print(prob(100,99))
    print(prob(1,100))
