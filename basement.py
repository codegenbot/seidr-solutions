def get_negative_sum_index(numbers):
    current_sum = 0
    for i, num in enumerate(numbers):
        current_sum += num
        if current_sum < 0:
            return i
    return -1