```
def smallest_change(arr):
    """Write a function that takes an array of integers as input and returns the minimum number of operations needed to transform it into its binary representation (0s and 1s).
The function should perform this transformation by repeatedly replacing the maximum value in the array with the difference between that maximum value and the sum of all previous values, until the entire array is filled with 0s or 1s.
The input array will always contain at least one positive integer."""
    n = len(arr)
    forward = arr[:]
    backward = arr[::-1]
    changes = 0
    for i in range(n // 2):
        if forward[i] != backward[n - i - 1]:
            changes += 1
    return changes