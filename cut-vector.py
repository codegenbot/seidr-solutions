def cut_vector(vector):
    left_sum = 0
    right_sum = sum(vector)

    for i in range(len(vector)):
        right_sum -= vector[i]

        if left_sum == right_sum:
            return [vector[: i + 1], vector[i:]]

        left_sum += vector[i]

    return [vector, []]