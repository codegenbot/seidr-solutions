def cut_vector(vector):
    min_diff = float("inf")
    cut_index = 0
    left_sum = sum(vector[:1])
    right_sum = sum(vector[1:])

    for i in range(1, len(vector)):
        new_left_sum = left_sum + vector[i]
        new_right_sum = right_sum - vector[i]

        if abs(new_left_sum - new_right_sum) < min_diff:
            min_diff = abs(new_left_sum - new_right_sum)
            cut_index = i

    return vector[: cut_index + 1], vector[cut_index:]