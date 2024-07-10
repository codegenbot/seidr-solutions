def basement(vector):
    for i, num in enumerate(vector):
        total = 0
        total += num
        if total < 0:
            return i + 1
    return -1