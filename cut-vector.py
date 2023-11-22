def cut_vector(vector):
    total_sum = sum(vector)
    current_sum = 0
    min_diff = float("inf")
    cut_index = 0

    for i in range(len(vector)):
        current_sum += vector[i]
        diff = abs(total_sum - 2 * current_sum)

        if diff < min_diff:
            min_diff = diff
            cut_index = i

    return vector[: cut_index + 1], vector[cut_index + 1 :]