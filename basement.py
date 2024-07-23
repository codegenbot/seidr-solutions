def basement(vector):
    total = 0
    for i, num in enumerate(vector):
        total += num
        if total < 0:
            continue
        elif total == 0:
            total = 0
        else:
            return i
    return -1