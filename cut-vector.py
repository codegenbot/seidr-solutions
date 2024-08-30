def cut_vector(vector):
    min_diff = float("inf")
    cut_index = -1
    left_sum = 0
    right_sum = sum(vector)

    for i in range(len(vector)):
        right_sum -= vector[i]
        if abs(left_sum - right_sum) < min_diff:
            min_diff = abs(left_sum - right_sum)
            cut_index = i

        left_sum += vector[i]

    return [vector[: cut_index + 1], vector[cut_index:]]