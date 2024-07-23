def basement(vector):
    total = 0
    min_index = -1
    for i, num in enumerate(vector):
        total += num
        if total < 0:
            min_index = i
    return min_index if min_index != len(vector) else -1