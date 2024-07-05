def basement(arr):
    total = 0
    for i, x in enumerate(arr):
        total += x
        if total < 0 and i > 0:
            return i + 1
    return -1