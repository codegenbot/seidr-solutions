def smallest_change(arr):
    n = len(arr)
    front = arr[: n // 2]
    back = arr[n // 2 :][::-1]

    changes = sum(1 for a, b in zip(front, back) if a != b)
    return changes