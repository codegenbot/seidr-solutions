def cut_vector(vector):
    total_sum = sum(vector)
    left_sum = 0
    min_diff = float("inf")
    split_index = -1

    for i in range(len(vector)):
        left_sum += vector[i]
        right_sum = total_sum - left_sum

        if left_sum == right_sum:
            return [vector[: i + 1], vector[i:]]

        diff = abs(left_sum - right_sum)
        if diff < min_diff:
            min_diff = diff
            split_index = i

    return [vector[: split_index + 1], vector[split_index + 1 :]]