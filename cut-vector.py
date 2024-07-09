def cut_vector(vector):
    total = sum(vector)
    min_diff = float('inf')
    split_index = 0
    for i in range(1, len(vector)):
        left_sum = sum(vector[:i])
        right_sum = total - left_sum
        if abs(left_sum - right_sum) <= min_diff or left_sum == right_sum:
            min_diff = abs(left_sum - right_sum)
            split_index = i

    if min_diff == float('inf'):
        return [vector, []]
    return [vector[:split_index], vector[split_index:]]