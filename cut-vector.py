def cut_vector(vector):
    total = sum(vector)
    left_sum = 0
    min_diff = float("inf")
    split_index = 0
    for i, num in enumerate(vector):
        left_sum += num
        right_sum = total - left_sum
        if left_sum == right_sum:
            return [vector[:i+1], vector[i:]]
        diff = abs(left_sum - right_sum)
        if diff < min_diff:
            min_diff = diff
            split_index = i + 1
    return [vector[:split_index], vector[split_index:]]