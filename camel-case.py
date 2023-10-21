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
Read a file with a list of words, one per line, and output the list of words
without duplicates and with each word in sorted order of its length.
For example, the input
cat
dog
tiger
lion
cheetah
zebra
horse
giraffe
should produce output
"""
if __name__ == '__main__':
    msg = sys.stdin.read()
    msg = msg.split()
    for i in range(len(msg)):
        msg[i] = msg[i].strip()
    for j in range(len(msg)):
        for i in range(len(msg)-1):
            if len(msg[i]) > len(msg[i+1]):
                msg[i], msg[i+1] = msg[i+1], msg[i]
    print(msg)
