def basement(input):
    total = 0
    for i in range(len(input)):
        total += input[i]
        if total < 0:
            continue
        elif total == 0:
            total = 0
        else:
            return i + 1
    return -1