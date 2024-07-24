def cut_vector(vector):
    left_sum = 0
    right_sum = sum(vector)
    min_diff = float("inf")
    cut_index = -1

    for i in range(len(vector)):
        left_sum += vector[i]
        right_sum -= vector[i]

        if left_sum == right_sum:
            return [vector[: i + 1], vector[i:]]
        elif abs(left_sum - right_sum) < min_diff:
            min_diff = abs(left_sum - right_sum)
            cut_index = i

    return [vector[: cut_index + 1], vector[cut_index:]]