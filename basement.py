def basement(v):
    total_sum = 0
    for i, x in enumerate(v):
        total_sum += x
        if total_sum < 0:
            return i
    return -1