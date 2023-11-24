def cut_vector(vector):
    n = len(vector)
    total_sum = sum(vector)
    left_sum = 0
    right_sum = total_sum - vector[0]
    min_diff = float("inf")
    cut_index = 0

    for i in range(1, n):
        left_sum += vector[i - 1]
        right_sum -= vector[i - 1]
        diff = abs(left_sum - right_sum)

        if diff < min_diff:
            min_diff = diff
            cut_index = i

    if cut_index == 0 or cut_index == n-1:
        return vector[:], []
    else:
        return vector[:cut_index+1], vector[cut_index+1:]