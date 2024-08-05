def basement(input_vector):
    for i in range(len(input_vector)):
        total_sum = sum(input_vector[: i + 1])
        if total_sum < 0:
            return i
    return -1