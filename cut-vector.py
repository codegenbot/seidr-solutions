def cut_vector(vector):
    left_sum = 0
    min_diff = float("inf")
    cut_point = -1

    for i in range(len(vector)):
        if i == len(vector) - 1:
            right_sum = sum(vector[:i])
        else:
            right_sum = sum(vector[i + 1 :])

        diff = abs(left_sum - right_sum)

        if diff <= min_diff:
            min_diff = diff
            cut_point = i

        left_sum += vector[i]

    return tuple(vector[: cut_point + 1]), tuple(vector[cut_point + 1 :])