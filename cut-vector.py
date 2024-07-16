def cut_vector(vector):
    vector.sort()
    min_diff = float("inf")
    split_index = 0

    for i in range(1, len(vector)):
        left_sum = sum(vector[:i])
        right_sum = sum(vector[i:])

        if abs(left_sum - right_sum) < min_diff:
            diff = abs(left_sum - right_sum)
            mean_left = left_sum / (i + 1e-6)
            mean_right = right_sum / (len(vector) - i - 1e-6)

            if abs(mean_left - mean_right) <= diff:
                return vector[:i], vector[i:]

        if abs(left_sum - right_sum) == min_diff:
            return vector[:i], vector[i:]

    return vector[:split_index], vector[split_index:]