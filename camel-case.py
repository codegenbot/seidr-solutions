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
    s = input()
    p = re.compile("([a-zA-Z0-9]+)-([a-zA-Z0-9]+)-")
    while True:
        m = p.search(s)
        if m:
            s = s[:m.start(1)] + m.group(1) + m.group(2).capitalize() + s[m.end(2):]
        else:
            break
    print(s)
