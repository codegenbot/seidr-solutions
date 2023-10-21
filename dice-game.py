import os
import sys
import numpy as np
import math
import datetime
import collections
import itertools
import queue
import re

if __name__ == '__main__':
    p = int(input())
    q = int(input())
    res = 0
    for i in range(q+1,p+1):
        res += (1/(i-q)) * (1/(p-i+1))
    print(round(res, 5))
