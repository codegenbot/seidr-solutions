import os
import sys
import numpy as np
import math
import datetime
import collections
import itertools
import queue
import re

for _ in range(int(input())):
    a = []
    largs = []
    for _ in range(int(input())):
        a.append(int(input()))

    for i in range(len(a)-1, -1, -1):
        if len(largs) == 0:
            largs.append(a[i])
        elif largs[-1] <= a[i]:
            largs.append(a[i])

    largs.reverse()
    print(len(largs))
    print(" ".join([str(x) for x in largs]))
