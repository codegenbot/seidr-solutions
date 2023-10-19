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
    test_cases = int(input())
    for _ in range(test_cases):
        n = int(input())
        arr = list(map(int, input().split()))
        max_num = arr[-1]
        print(max_num)
        for i in range(n-2, -1, -1):
            if arr[i] >= max_num:
                max_num = arr[i]
        print(max_num)
