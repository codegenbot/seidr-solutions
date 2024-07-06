```
def smallest_change(arr):
    """Return the number of different elements between arr and its reverse."""
    n = len(arr)
    forward = arr[:]
    backward = arr[::-1]
    changes = 0
    for i in range(n // 2):
        if forward[i] != backward[n - i - 1]:
            changes += 1
    return changes