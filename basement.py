def basement(input_list):
    total_sum = 0
    for i, num in enumerate(input_list):
        total_sum += num
        if total_sum < 0:
            return i
    return -1