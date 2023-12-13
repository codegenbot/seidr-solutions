def cut_vector(vector):
    total_sum = sum(vector)
    current_sum = 0
    min_diff = float('inf')
    split_indices = (0, 1)

    for i in range(len(vector) - 1):
        current_sum += vector[i]
        diff = abs(current_sum * 2 - total_sum)
        if diff < min_diff:
            min_diff = diff
            split_indices = (i, i + 1)

    return vector[:split_indices[0] + 1], vector[split_indices[1]:]