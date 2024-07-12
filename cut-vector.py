def cut_vector(vector):
    min_diff = float("inf")
    split_idx1 = -1
    split_idx2 = -1
    for i in range(1, len(vector)):
        left_sum = sum(vector[:i])
        right_sum = sum(vector[i:])
        if left_sum == right_sum:
            split_idx2 = i
        else:
            diff = abs(left_sum - right_sum)
            if diff < min_diff:
                min_diff = diff
                split_idx1 = i
    return vector[:split_idx1], vector[split_idx1:split_idx2+1] if split_idx2 != -1 else vector[split_idx1:]