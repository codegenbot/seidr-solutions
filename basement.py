def basement(v):
    total = 0
    for i, x in enumerate(v):
        total += x
        if total < 0:
            return i + 1
    return -1