def cut_vector(vector):
    min_diff = float("inf")
    cut_index = -1
    left_sum = 0
    for i in range(len(vector)):
        right_sum = sum(vector[i + 1 :])
        diff = abs(left_sum - right_sum)
        if diff < min_diff:
            min_diff = diff
            cut_index = i
        left_sum += vector[i]
    if cut_index == -1:
        return [vector], [0]
    left_vector = vector[: cut_index + 1]
    right_vector = vector[cut_index:]
    return [left_vector], [right_vector, 0]