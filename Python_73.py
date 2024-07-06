def smallest_change(arr):
    arr = list(sorted(set(arr)))
    changes = len(arr) - (len(set(arr)) == 1)
    return changes