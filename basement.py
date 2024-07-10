def basement(vector):
    total = 0
    for i, num in enumerate(vector):
        total += num
        if total < 0:
            return i + 1
    return -1 if total >= 0 else len(vector)