def smallest_change(arr):
    n = len(arr)
    forward = arr[:]
    backward = arr[::-1]
    changes = sum(1 for a, b in zip(forward, backward) if a != b)
    return changes