def cut_vector(vector):
    min_diff = float("inf")
    cut_index = -1
    left_sum = sum(vector[:1])
    right_sum = sum(vector[1:])

    for i in range(1, len(vector)):
        new_left_sum = left_sum + vector[i]
        new_right_sum = right_sum - vector[i]
        diff = abs(new_left_sum - new_right_sum)
        if diff < min_diff:
            min_diff = diff
            cut_index = i

    return vector[: cut_index + 1], vector[cut_index:]