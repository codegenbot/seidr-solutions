def smallest_change(arr):
    n = len(arr)
    rev_arr = arr[::-1]
    count = sum(1 for a, b in zip(arr, rev_arr) if a != b)
    return count