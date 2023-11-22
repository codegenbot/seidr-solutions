def cut_vector(vector):
    n = len(vector)
    if n < 2:
        return vector, [0]

    total_sum = sum(vector)
    left_sum = 0
    right_sum = total_sum

    for i in range(0, n - 1):
        left_sum += vector[i]
        right_sum -= vector[i]

        if left_sum == right_sum or abs(left_sum - right_sum) <= abs(
            left_sum - right_sum - vector[i + 1]
        ):
            return vector[: i + 1], vector[i + 1 :]

    return vector, [0]