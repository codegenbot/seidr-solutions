def basement(v):
    for i in range(len(v)):
        s = sum(v[: i + 1])
        if s < 0:
            return i
    return -1