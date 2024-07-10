def basement(vector):
    total = 0
    first_negative_index = -1
    for i, num in enumerate(vector):
        total += num
        if total < 0 and first_negative_index == -1:
            first_negative_index = i + 1
    return first_negative_index