def smallest_change(arr):
    arr = str(arr)
    rev_arr = arr[::-1]
    return sum(c1 != c2 for c1, c2 in zip(arr, rev_arr))