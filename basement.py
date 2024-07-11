def basement(v):
    total = 0
    for i in range(len(v)):
        total += v[i]
        if total < 0:
            return i + 1
    return -1