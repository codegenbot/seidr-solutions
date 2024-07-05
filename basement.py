def basement(arr):
    total = 0
    prev_total = 0
    for i, x in enumerate(arr):
        total += x
        if total < prev_total:
            return i + 1
        prev_total = total
    return -1