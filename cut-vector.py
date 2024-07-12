def cut_vector(vector):
    min_diff = float("inf")
    cut_index = 0
    for i in range(1, len(vector)):
        left_sum = sum(vector[:i])
        right_sum = sum(vector[i:])
        diff = abs(left_sum - right_sum)
        if diff < min_diff:
            min_diff = diff
            cut_index = i
    if left_sum == right_sum:
        return [vector], []
    return vector[:cut_index], vector[cut_index:]