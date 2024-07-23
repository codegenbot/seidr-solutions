def basement(vector):
    total = 0
    min_index = len(vector)
    for i, num in enumerate(vector):
        total += num
        if total < 0:
            return i + 1
    return -1