def cut_vector(vector):
    n = len(vector)
    prefix_sum = [0] * (n + 1)
    for i in range(1, n + 1):
        prefix_sum[i] = prefix_sum[i - 1] + vector[i - 1]

    total_sum = prefix_sum[n]
    min_diff = float("inf")
    cut_index = -1

    for i in range(1, n):
        sum_left = prefix_sum[i]
        sum_right = total_sum - sum_left
        diff = abs(sum_left - sum_right)

        if diff < min_diff:
            min_diff = diff
            cut_index = i

    subvector1 = vector[:cut_index]
    subvector2 = vector[cut_index:]

    return subvector1, subvector2