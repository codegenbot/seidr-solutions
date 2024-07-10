def cut_vector(vector):
    if len(vector) == 1:
        return [vector], []

    left_sum = right_sum = sum(vector[: len(vector) // 2])
    min_diff = abs(left_sum - right_sum)

    for i in range(1, len(vector)):
        new_left_sum = sum(vector[:i])
        new_right_sum = sum(vector[i:])
        diff = abs(new_left_sum - new_right_sum)
        if diff < min_diff:
            min_diff = diff
            cut_index = i

    return vector[: cut_index + 1], vector[cut_index:]