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
Given a string, return a new string where the first and last chars have been exchanged.
Examples:
front_back('code') → 'eodc'
front_back('a') → 'a'
front_back('ab') → 'ba'
"""
if __name__ == '__main__':
    ss = input()
    if len(ss) == 1:
        print(ss)
    else:
        print(ss[-1] + ss[1:-1] + ss[0])
