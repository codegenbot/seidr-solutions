def smallest_change(arr):
    n = len(arr)
    rev_arr = arr[::-1]
    diff_count = sum(min(a, b) for a, b in zip(arr, rev_arr))
    return diff_count