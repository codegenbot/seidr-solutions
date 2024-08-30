def basement(vector):
    total = 0
    for i, num in enumerate(vector):
        if total < 0:
            return i
        total += num
    return -1