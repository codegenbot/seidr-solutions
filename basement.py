def basement(v):
    total = 0
    for i, n in enumerate(v):
        total += n
        if total < 0:
            return i
    return -1