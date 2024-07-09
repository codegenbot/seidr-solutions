def smallest_change(arr):
    return len(str(arr)) - 2 * sum(1 for a, b in zip(arr, arr[::-1]) if a != b)