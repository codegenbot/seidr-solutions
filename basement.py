def basement(indexes):
    for i in range(len(indexes)):
        total = sum(indexes[: i + 1])
        if total < 0:
            return i
    return -1