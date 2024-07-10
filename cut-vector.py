def cut_vector(vector):
    if len(vector) == 1:
        return [vector], []

    left_sum = sum(vector[: len(vector) // 2])
    right_sum = sum(vector[len(vector) // 2 :])

    if left_sum == right_sum:
        return [vector[: len(vector) // 2]], [vector[len(vector) // 2 :]]
    else:
        min_diff = abs(left_sum - right_sum)
        for i in range(len(vector) // 2):
            new_left_sum = sum(vector[:i])
            new_right_sum = sum(vector[i:])
            if abs(new_left_sum - new_right_sum) < min_diff:
                min_diff = abs(new_left_sum - new_right_sum)
                cut_index = i
        return [vector[:cut_index]], [vector[cut_index:]]