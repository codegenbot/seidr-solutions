def basement(v):
    if v[0] < 0:
        return 1
    total = 0
    for i in range(1, len(v)):
        total += v[i]
        if total < 0:
            return i + 1
    return -1