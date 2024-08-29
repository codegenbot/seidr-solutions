def basement(v):
    for i in range(len(v)):
        total = sum(v[:i+1])
        if total < 0:
            return i
    return -1