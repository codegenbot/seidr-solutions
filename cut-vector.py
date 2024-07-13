def cut_vector(vector):
    left_sum = 0
    min_diff = float("inf")
    min_index = -1
    for i in range(len(vector)):
        right_sum = sum(vector[i + 1 :])
        diff = abs(left_sum - right_sum)
        if diff == 0 or (diff < min_diff and diff != 0):
            min_diff = diff
            min_index = i
        left_sum += vector[i]
    return vector[: min_index + 1], vector[min_index + 1 :]