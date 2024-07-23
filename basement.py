def basement(vector):
    total = 0
    min_index = len(vector)
    prev_total = 0
    for i, num in enumerate(vector):
        if total <= 0 and prev_total > 0:
            min_index = i
        total += num
        prev_total = total
    return min_index if min_index != len(vector) else -1