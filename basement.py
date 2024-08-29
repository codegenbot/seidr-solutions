def basement(indexes):
    total = 0
    for i, num in enumerate(indexes):
        total += num
        if total < 0:
            return i
    return -1