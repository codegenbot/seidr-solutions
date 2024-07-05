def basement(v):
    total = 0
    for i, n in enumerate(v):
        if total < 0:
            return i
        total += n
    return -1