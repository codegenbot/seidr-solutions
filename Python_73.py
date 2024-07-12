def smallest_change(arr):
    n = len(arr)
    forward = arr.copy()
    backward = arr.copy()[::-1]
    changes = sum(c1 != c2 for c1, c2 in zip(forward, backward))
    return changes