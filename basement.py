def basement(v):
    total = 0
    for i in range(len(v)):
        if total < 0:
            return i + 1
        total += v[i]
    return -1