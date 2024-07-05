def basement(v):
    total = v[0]
    for i in range(1, len(v)):
        total += v[i]
        if total < 0:
            return i + 1
    return -1