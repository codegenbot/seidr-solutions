import os
import sys
import numpy as np
import math
import datetime
import collections
import itertools
import queue
import re

def cut(array):
    if len(array) == 0:
        return []
    if len(array) == 1:
        return [1, array[0], 0]
    if len(array) == 2:
        return [1, array[0], 0, 0, array[1], 1]
    if len(array) == 3:
        return [1, array[0], 0, 0, array[1], 1, 0, array[2], 1]

    if array[0] == array[1]:
        return [1, array[0], 0] + cut(array[2:])
    if array[0] + 1 == array[1]:
        return [1, array[0], 0, 0, array[1], 0] + cut(array[2:])
    if array[0] + 2 == array[1]:
        return [1, array[0], 0, 0, array[1], 1] + cut(array[2:])
    if array[0] == array[1] + 1:
        return [1, array[0], 0, 0, array[1], 1] + cut(array[2:])
    if array[0] == array[1] + 2:
        return [1, array[0], 0, 0, array[1], 0, 0, array[2], 1] + cut(array[3:])
    if array[0] > array[1]:
        return [1, array[0], 0] + cut(array[1:])
    if array[0] < array[1]:
        return [1, array[0], 1] + cut(array[1:])



if __name__ == '__main__':
    input_array = [int(i) for i in sys.argv[1].split(',')]
    print(cut(input_array))
