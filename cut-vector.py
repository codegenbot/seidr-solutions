def cut_vector(vector):
    min_diff = float('inf')
    split_index = -1

    for i in range(len(vector)):
        left_sum = sum(vector[:i + 1])
        right_sum = sum(vector[i + 1:])
        diff = abs(left_sum - right_sum)
        if diff == 0 or (diff < min_diff and any(x == y for x, y in zip(vector[:i], vector[i:]))):
            min_diff = diff
            split_index = i

    return vector[:split_index + 1], vector[split_index + 1:]