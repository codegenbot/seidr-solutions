def cut_vector(vector):
    n = len(vector)
    left_sum = sum(vector[: n // 2])
    right_sum = sum(vector[n // 2 :])

    diff = abs(left_sum - right_sum)

    for i in range(1, n // 2):
        new_left_sum = sum(vector[:i])
        new_right_sum = sum(vector[i:])

        if abs(new_left_sum - new_right_sum) < diff:
            left_sum = new_left_sum
            right_sum = new_right_sum
            diff = abs(left_sum - right_sum)

    return vector[: left_sum.size // 2 + 1], vector[left_sum.size // 2 :]