def cut_vector(vector):
    min_diff = float("inf")
    result_left = []
    result_right = []

    for i in range(1, len(vector)):
        left_sum = sum(vector[:i])
        right_sum = sum(vector[i:])

        if left_sum == right_sum:
            return vector[:i], vector[i:]
        elif abs(left_sum - right_sum) < min_diff:
            min_diff = abs(left_sum - right_sum)
            result_left, result_right = vector[:i], vector[i:]
        elif abs(left_sum - right_sum) == min_diff:
            result_left, result_right = vector[:i], vector[i:]

    return result_left, result_right