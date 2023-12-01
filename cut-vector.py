def cut_vector(vector):
    prefix_sum = [0]
    for i in range(len(vector)):
        prefix_sum.append(prefix_sum[-1] + vector[i])

    diff = float("inf")
    split_index = 0

    for i in range(1, len(prefix_sum)):
        left_sum = prefix_sum[i]
        right_sum = prefix_sum[-1] - prefix_sum[i]
        current_diff = abs(left_sum - right_sum)
        if current_diff < diff:
            diff = current_diff
            split_index = i

    left_subvector = vector[:split_index]
    right_subvector = vector[split_index:]

    return left_subvector, right_subvector