def basement(input):
    total = 0
    for i, x in enumerate(input, start=1):
        total += x 
        if total <= 0:
            return i
    return -1