def smallest_change(arr):
    n = len(arr)
    rev_arr = arr[::-1]

    changes = sum(x != y for x, y in zip(arr, rev_arr))

    return changes