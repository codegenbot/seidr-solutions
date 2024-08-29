def cut_vector(vector):
    left_sum = 0
    right_sum = sum(vector[1:])

    for i in range(len(vector) - 1):
        new_left_sum = left_sum + vector[i]
        new_right_sum = right_sum - vector[i + 1]

        if abs(new_left_sum - new_right_sum) <= abs(left_sum - right_sum):
            return (vector[: i + 1], vector[i + 1 :])

    return (vector, [])