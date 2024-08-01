def smallest_change(arr):
    arr = arr[::-1]
    return sum(a != b for a, b in zip(arr, arr[::-1]))