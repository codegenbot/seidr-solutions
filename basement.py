def basement(arr):
    total = 0
    for i, x in enumerate(arr):
        total += x
        if total < 0:
            continue
        if total == 0:
            continue
        return i + 1
    return -1