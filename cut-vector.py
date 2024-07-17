def cut_vector(vector):
    left_sum = 0
    min_diff = float("inf")
    cut_index = -1

    for i in range(len(vector)):
        right_sum = sum(vector[i + 1 :])

        if abs(left_sum - right_sum) < min_diff:
            min_diff = abs(left_sum - right_sum)
            cut_index = i

        left_sum += vector[i]

    return vector[:cut_index], vector[cut_index:]