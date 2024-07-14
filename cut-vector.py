def cut_vector(vector):
    left_sum = right_sum = 0
    min_diff = float("inf")
    cut_index = -1

    for i in range(len(vector)):
        if i > 0:
            left_sum += vector[i - 1]
        right_sum = sum(vector[i:])

        if left_sum == right_sum:
            return [vector[:i]], [vector[i:]]
        elif abs(left_sum - right_sum) < min_diff:
            min_diff = abs(left_sum - right_sum)
            cut_index = i

    if cut_index != -1:
        return vector[:cut_index], vector[cut_index:]
    else:
        return [], []