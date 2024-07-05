def basement(arr):
    total = 0
    for i, x in enumerate(arr):
        total += x
        if total < 0:
            return i
        break
    return -1