def basement(input):
    total = 0
    for i, x in enumerate(input):
        if total < 0:
            return i + 1
        total += x 
    return -1