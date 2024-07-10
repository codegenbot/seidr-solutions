def cut_vector(vector):
    if len(vector) == 1:
        return vector, []

    left_sum = sum(vector[: len(vector) // 2])
    right_sum = sum(vector[len(vector) // 2 :])

    if left_sum == right_sum:
        return vector[: len(vector) // 2 + 1], vector[len(vector) // 2 :]
    else:
        min_diff = abs(left_sum - right_sum)
        for i in range(len(vector) // 2):
            if abs(sum(vector[:i]) - sum(vector[i:])) < min_diff:
                min_diff = abs(sum(vector[:i]) - sum(vector[i:]))
                cut_index = i
        return vector[:cut_index], vector[cut_index:]