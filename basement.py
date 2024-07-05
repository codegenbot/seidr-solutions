def basement(v):
    total = 0
    for i in range(len(v)):
        total += v[i]
        if total < 0:
            return i
    return -1