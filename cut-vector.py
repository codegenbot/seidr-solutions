def cut_vector(vector):
    left_sum = 0
    right_sum = sum(vector[1:])
    min_diff = float("inf")
    result = (-1, -1)

    for i in range(len(vector) - 1):
        left_sum += vector[i]
        right_sum -= vector[i + 1]

        if abs(left_sum - right_sum) < min_diff:
            min_diff = abs(left_sum - right_sum)
            result = (0, i + 1)

    return [vector[: result[1]]], [vector[result[1] :]]