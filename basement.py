def basement(vector):
    prev_total = 0
    for i, num in enumerate(vector):
        prev_total += num
        if prev_total < 0:
            return i + 1
    return -1