def basement(vector):
    total = 0
    min_index = len(vector)
    for i, num in enumerate(vector):
        if total < 0:
            min_index = i
        total += num
    return min_index if total < 0 else -1