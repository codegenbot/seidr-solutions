def smallest_change(arr):
    n = len(arr)
    forward = arr[: n // 2]
    backward = arr[n // 2 :][::-1]
    changes = sum(c1 != c2 for c1, c2 in zip(forward, backward))
    return changes