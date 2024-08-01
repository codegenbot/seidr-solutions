def smallest_change(arr):
    n = len(arr)
    arr = str(arr)
    rev_arr = arr[::-1]
    diff_count = sum(1 for i, j in zip(arr, rev_arr) if i != j)
    return diff_count