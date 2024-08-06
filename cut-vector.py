def cut_vector(vector):
    if len(vector) == 1:
        return vector[0], [vector[0]], [vector[0]]

    left_sum = sum(vector[: len(vector) // 2])
    right_sum = sum(vector[len(vector) // 2 :])

    if left_sum == right_sum:
        return left_sum, vector[: len(vector) // 2], vector[len(vector) // 2 :]
    else:
        min_diff = abs(left_sum - right_sum)
        for i in range(len(vector)):
            left_sum -= vector[i]
            right_sum += vector[i]
            if abs(left_sum - right_sum) < min_diff:
                min_diff = abs(left_sum - right_sum)
        return left_sum, vector[: len(vector) // 2], vector[len(vector) // 2 :]