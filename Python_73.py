def smallest_change(arr):
    arr = sorted(set(arr))
    n = len(arr)
    changes = sum(a != b for a, b in zip(arr, [a] * n))
    return changes