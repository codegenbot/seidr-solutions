def basement(input_vector):
    total_sum = 0
    for i in range(len(input_vector)):
        total_sum += input_vector[i]
        if total_sum < 0:
            return i
    return -1