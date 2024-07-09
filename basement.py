def basement(input):
    total = -1
    for i in range(len(input)):
        total += input[i]
        if total < 0:
            return i + 1
    return -1