def cut_vector(vector):
    n = len(vector)
    if n == 0:
        return [], []

    left_sum = vector[0]
    right_sum = sum(vector[1:])

    minimum_diff = abs(left_sum - right_sum)
    best_index = 0

    for i in range(1, n - 1):
        left_sum += vector[i]
        right_sum -= vector[i]
        diff = abs(left_sum - right_sum)

        if diff < minimum_diff:
            minimum_diff = diff
            best_index = i

    return vector[: best_index + 1], vector[best_index + 1 :]