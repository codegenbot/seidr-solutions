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
Given a vector of positive integers, ﬁnd the spot where, if you cut the vector, the
numbers on both sides are either equal, or the diﬀerence is as small as possible.
Return the two resulting subvectors as two outputs.

Input: 1,0
Output: 1,0,0

Input: 1,10
Output: 1,10,0

Input: 1,100
Output: 1,100,0

Input: 1,1000
Output: 1,1000,0

Input: 1,10000
Output: 1,10000,0

Input: 1,1,1,1,1,1,1,1
Output: 1,1,1,1,1,1,1,1,0

Input: 1, 10, 100, 1000, 1, 10, 100, 1000, 1, 10, 100, 1000, 1, 10, 100, 1000
Output: 1, 10, 100, 1000, 1, 10, 100, 1000, 1, 10, 100, 1000, 1, 10, 100, 1000, 0

"""
if __name__ == '__main__':
