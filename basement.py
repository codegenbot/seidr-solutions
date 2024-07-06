def basement(vector):
    total = 0
    for i, x in enumerate(vector):
        total += x
        if total < 0:
            return i + 1
    return -1