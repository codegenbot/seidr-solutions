def basement(input_vector):
    total = 0
    for i in range(len(input_vector)):
        total += input_vector[i]
        if total < 0:
            return i + 1
    return -1