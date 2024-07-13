def cut_vector(vector):
    min_diff = float("inf")
    best_split_index = 0

    for i in range(1, len(vector)):
        left_sum = sum(vector[:i])
        right_sum = sum(vector[i:])

        if left_sum == right_sum:
            return vector[:i], vector[i:], i
        elif abs(left_sum - right_sum) < min_diff:
            min_diff = abs(left_sum - right_sum)
            best_split_index = i

    return vector[:best_split_index], vector[best_split_index:], best_split_index