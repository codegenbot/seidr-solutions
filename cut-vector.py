def cut_vector(vector):
    n = len(vector)
    min_diff = float("inf")
    split_point = 0

    for i in range(1, n):
        left_sum = sum(vector[:i])
        right_sum = sum(vector[i:])

        diff = abs(left_sum - right_sum)

        if diff < min_diff:
            min_diff = diff
            split_point = i

    return vector[:split_point], vector[split_point:]