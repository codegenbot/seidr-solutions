def cut_vector(vector):
    n = len(vector)
    min_diff = float("inf")
    index = -1
    left_sum = 0
    right_sum = sum(vector)

    for i in range(n - 1):
        left_sum += vector[i]
        right_sum -= vector[i]
        diff = abs(left_sum - right_sum)
        if diff < min_diff:
            min_diff = diff
            index = i

    return vector[: index + 1], vector[index:]