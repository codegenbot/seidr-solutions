def cut_vector(vector):
    min_diff = float("inf")
    cut_index = 0

    left_sum = sum(vector[:1])
    right_sum = sum(vector[1:])

    for i in range(1, len(vector)):
        if abs(left_sum - right_sum) <= min_diff:
            min_diff = abs(left_sum - right_sum)
            cut_index = i
        left_sum += vector[i]
        right_sum -= vector[i]

    return [vector[:cut_index], vector[cut_index:]]