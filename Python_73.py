def smallest_change(arr):
    n = len(arr)
    forward = arr[: n // 2]
    backward = arr[n // 2 :][::-1]

    count = sum(1 for a in zip(forward, backward) if a[0] != a[1])
    return count