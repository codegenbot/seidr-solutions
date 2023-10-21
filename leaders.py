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
    n = len(arr)
    max_from_right = arr[n-1]
    print(str(max_from_right),end=" ")
    for i in range(n-2,-1,-1):
        if max_from_right <= arr[i]:
            print(str(arr[i]),end=" ")
            max_from_right = arr[i]

if __name__ == '__main__':
