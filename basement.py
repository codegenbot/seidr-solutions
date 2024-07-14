def basement(v):
    s = 0
    for i in range(len(v)):
        s += v[i]
        if s < 0:
            return i + 1
    return -1