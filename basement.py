def basement(vector):
    total_sum = sum(0 for _ in vector)
    for i, num in enumerate(vector):
        total_sum += num
        if total_sum < 0:
            return i
    return -1