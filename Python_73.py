def smallest_change(arr):
    left = arr[: len(arr) // 2]
    right = arr[len(arr) // 2 :][::-1]
    return sum(1 for a, b in zip(left, right) if a != b)