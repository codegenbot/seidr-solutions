def basement(input):
    for i in range(len(input)):
        total = sum(input[: i + 1])
        if total < 0:
            return i
    return -1