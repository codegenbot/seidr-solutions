def basement(input_vector):
    total_sum = 0
    for i, num in enumerate(input_vector):
        total_sum += num
        if total_sum < 0:
            return i + 1
    return -1