def cut_vector(vector):
    n = len(vector)
    min_diff = float("inf")
    cut_index = -1
    left_sum = 0
    right_sum = sum(vector)

    for i in range(n):
        right_sum -= vector[i]
        if left_sum == right_sum:
            return [vector[: i + 1], vector[i:]]
        diff = abs(left_sum - right_sum)
        if diff < min_diff:
            min_diff = diff
            cut_index = i

    left_sum += vector[cut_index]
    right_sum -= vector[cut_index]
    return [vector[: cut_index + 1], vector[cut_index:]]