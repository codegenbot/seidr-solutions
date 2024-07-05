def basement(v):
    total = sum(v[:1])
    if total < 0:
        return 0
    for i, n in enumerate(v[1:]):
        total += n
        if total < 0:
            return i + 1
    return -1