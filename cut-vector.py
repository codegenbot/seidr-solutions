def cut_vector(vector):
    left_sum = 0
    min_diff = float("inf")
    cut_index = -1

    for i in range(len(vector)):
        right_sum = sum(vector[i + 1 :])

        if left_sum == right_sum:
            return [vector[: i + 1], vector[i:]]

        diff = abs(left_sum - right_sum)

        if diff < min_diff:
            min_diff = diff
            cut_index = i

    if cut_index != -1:
        return [vector[: cut_index + 1], vector[cut_index:]]

    return [vector, []]