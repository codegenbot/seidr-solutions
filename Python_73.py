def smallest_change(arr):
    arr = [str(x) for x in arr]
    rev_arr = arr[::-1]
    changes = sum([1 if a != b else 0 for a, b in zip(arr, rev_arr)])
    return changes