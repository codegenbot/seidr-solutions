def leaders(input_vector):
    n = len(input_vector)
    result = [input_vector[n - 1]]

    for i in range(n - 2, -1, -1):
        if input_vector[i] >= input_vector[i + 1]:
            result.append(input_vector[i])

    return result[::-1]