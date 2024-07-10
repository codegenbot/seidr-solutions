def basement(vector):
    total = 0
    first_negative_index = None
    for i, num in enumerate(vector):
        total += num
        if total < 0:
            first_negative_index = i + 1
    return first_negative_index if first_negative_index else -1