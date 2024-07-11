def basement(input):
    total = 0
    for i, num in enumerate(input):
        total += num
        if total < 0:
            return i
    return -1