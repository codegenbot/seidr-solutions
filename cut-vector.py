def cut_vector(vector):
    n = len(vector)
    total_sum = sum(vector)
    left_sum = 0
    right_sum = total_sum
    min_diff = total_sum
    cut_index = 0

    for i in range(1, n):
        left_sum += vector[i - 1]
        right_sum -= vector[i - 1]
        diff = abs(left_sum - right_sum)

        if diff == 0:
            return vector[:i], vector[i:]

        if diff < min_diff:
            min_diff = diff
            cut_index = i

    if cut_index >= n:
        return [], []
    return vector[:cut_index], vector[cut_index:]