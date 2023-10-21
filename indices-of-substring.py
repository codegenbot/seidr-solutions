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
Given a text string and a target string, return a list of integers of the indices at which the target appears in the text.
Targets may overlap.
"""
if __name__ == '__main__':
    text = input()
    pattern = input()

    for i in range(len(text)):
        if text[i:i + len(pattern)] == pattern:
            print(i, end=' ')
