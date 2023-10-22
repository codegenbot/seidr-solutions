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
"""
if __name__ == '__main__':
    t =  map(str,raw_input().split())
    l = t[0]
    c = t[1]
    for i in range(len(l)-len(c)):
        if l[i:i+len(c)] == c:
            print i,
