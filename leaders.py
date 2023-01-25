import os
import sys
import numpy as np
import math
import datetime
import collections
import itertools
import queue
import re

def leaders(arr):
    out = []
    for i in range(len(arr)-1, -1, -1):
        if len(out) == 0:
            out.append(arr[i])
        else:
            if arr[i] >= out[-1]:
                out.append(arr[i])
    return ' '.join(map(str, out[::-1])) + '\n'
if __name__ == '__main__':
    print(leaders(list(map(int, input().split()))))
