def basement(data):
    for i in range(len(data)):
        total = sum(data[: i + 1])
        if total < 0:
            return i
    return -1