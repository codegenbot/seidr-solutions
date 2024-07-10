def basement(input):
    total = -1
    for i, x in enumerate(input):
        total += x 
        if total < 0:
            return i + 1
    return -1