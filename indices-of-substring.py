import os
import sys
import numpy as np
import math
import datetime
import collections
import itertools
import queue
import re
the_string = str(input())
target = str(input())
indicies = []
idx = 0
if len(the_string) < len(target):
    print(-1)
elif the_string == target:
    print(0)
else:
    for i in range(len(target)):
        if target[i] == the_string[i]:
            idx += 1
        elif target[i] != the_string[i]:
            idx = 0
        indicies.append(idx)
    indicies = [str(x - len(target)) for x in indicies]
    print(' '.join(indicies))
if __name__ == '__main__':
    main()
