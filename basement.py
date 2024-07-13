def basement(input_vector):
    total, i = 0, 0
    while True:
        total += input_vector[i]
        if total < 0:
            return i + 1
        i += 1