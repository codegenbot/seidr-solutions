def basement(indexes):
    for i in range(len(indexes)):
        if sum(indexes[: i + 1]) < 0:
            return i
    return -1