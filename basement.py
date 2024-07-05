def basement(v):
    total = v[0]
    for i, x in enumerate(v[1:], start=1):
        total += x
        if total < 0:
            return i
    return -1