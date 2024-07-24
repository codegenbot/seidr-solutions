def cut_vector(vector):
    n = len(vector)
    left_sum = 0
    min_diff = float("inf")
    cut_idx = -1
    for i in range(n):
        right_sum = sum(vector[i + 1 :])
        if abs(left_sum - right_sum) < min_diff:
            min_diff = abs(left_sum - right_sum)
            cut_idx = i
        left_sum += vector[i]
    return vector[: cut_idx + 1], vector[cut_idx:]