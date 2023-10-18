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
Given a string of words, return the length of the shortest word(s).
String will never be empty and you do not need to account for different data types.
"""
if __name__ == '__main__':
    ss = input()
    ss = ss.split(' ')
    print(min(len(x) for x in ss))
