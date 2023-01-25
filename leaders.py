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
    out = [arr[-1]]
    lst = arr[-2::-1]
    out.extend([lst[i] for i in range(len(lst)) if lst[i] >= lst[i-1]])
    return ' '.join(map(str, out[::-1]))
if __name__ == '__main__':
    print(leaders(list(map(int, input().split()))))
