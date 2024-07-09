def basement(input):
    total = 0
    for i in range(len(input)):
        total += input[i]
        if total < 0:
            return i
    return -1