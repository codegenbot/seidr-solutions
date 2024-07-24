def basement(vector):
    total = 0
    index = -1
    for i, num in enumerate(vector):
        total += num
        if total < 0:
            return i
    return index