import numpy as np


def first_negative_index(arr):
    total = 0
    for i in range(len(arr)):
        total += arr[i]
        if total < 0:
            return i
    return -1


# Test case 1: Input array with no negative elements
arr = [1, 2, 3, 4, 5]
result = first_negative_index(arr)
print(result)  # Output: -1 (no negative index found)

# Test case 2: Input array with one negative element
arr = [-1, 2, 3, 4, 5]
result = first_negative_index(arr)
print(result)  # Output: 0 (first negative index found at 0)