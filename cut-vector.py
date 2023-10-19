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
2
2 129
output:
2
2
1
129

0
"""
if __name__ == '__main__':
    num = int(input())
    m_1, m_2 = map(int, input().split())
    if num == 1:
        print(m_1)
    elif num == 2:
        print(str(min(m_1, m_2)) + '\n' + str(max(m_1, m_2)))
