def smallest_change(arr):
    return sum(1 for a, b in zip(arr, reversed(arr)) if a != b)