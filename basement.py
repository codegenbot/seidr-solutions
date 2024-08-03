def basement(vec):
    for i in range(len(vec)):
        total = sum(vec[: i + 1])
        if total < 0:
            return i
    return -1