def smallest_change(arr):
    n = len(arr)
    rev_arr = arr[::-1]
    changes = sum(c1 != c2 for c1, c2 in zip(arr, rev_arr))
    return changes