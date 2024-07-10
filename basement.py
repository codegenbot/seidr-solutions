def basement(vector):
    total = 0
    for i, v in enumerate(vector):
        total += v
        if total < 0:
            return i + 1
    return -1