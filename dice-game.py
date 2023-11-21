import os
import sys
import numpy as np
import math
import datetime
import collections
import itertools
import queue
import re


def solve(n, m):
    total = n * m
    p = 0
    for i in range(1, n + 1):
        for j in range(1, m):
            if i > j:
                p += 1
    return p / total


if __name__ == '__main__':
