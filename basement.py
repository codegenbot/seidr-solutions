def basement(vec):
    for i in range(len(vec)):
        if sum(vec[: i + 1]) < 0:
            return i
    return -1