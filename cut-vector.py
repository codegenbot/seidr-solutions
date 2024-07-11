def cut_vector(vector):
    total_sum = sum(vector)
    left_sum = 0
    min_diff = float("inf")
    cut_index = -1

    for i in range(len(vector)):
        left_sum += vector[i]
        right_sum = total_sum - left_sum
        if left_sum == right_sum:
            return [vector[: i + 1], vector[i:]]

        diff = abs(left_sum - right_sum)
        if diff < min_diff:
            min_diff = diff
            cut_index = i

    return [vector[: cut_index + 1], vector[cut_index + 1 :]]