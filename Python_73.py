def smallest_change(arr):
    n = len(arr)
    arr = [str(i) for i in arr]
    arr = "".join(arr)
    left = arr[: n // 2]
    right = arr[n // 2 :][::-1]
    return sum(c1 != c2 for c1, c2 in zip(left, right))