
import numpy as np

def first_negative_index(arr):
    total = 0
    for i in range(len(arr)):
        total = total + arr[i]
        if total < 0:
            return i
    return -1