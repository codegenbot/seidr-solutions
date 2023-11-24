def cut_vector(vector):
    total_sum = sum(vector)
    left_sum = 0
    min_diff = total_sum
    min_diff_index = 0

    for i in range(len(vector)):
        left_sum += vector[i]
        right_sum = total_sum - left_sum
        diff = abs(left_sum - right_sum)

        if diff < min_diff:
            min_diff = diff
            min_diff_index = i

    return vector[: min_diff_index + 1], vector[min_diff_index + 1 :]