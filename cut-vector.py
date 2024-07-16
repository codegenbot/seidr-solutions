def cut_vector(vector):
    if len(vector) <= 1:
        return vector, []

    left_sums = [sum(vector[:i]) for i in range(len(vector))]
    right_sums = [sum(vector[i:]) for i in range(len(vector))]

    min_diff = float('inf')
    min_left_index, min_right_index = -1, -1
    for i in range(1, len(vector)):
        diff = abs(left_sums[i-1] - right_sums[-i])
        if diff < min_diff:
            min_diff = diff
            min_left_index, min_right_index = i-1, i
    return vector[:min_left_index], vector[min_right_index:]