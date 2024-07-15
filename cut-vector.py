def cut_vector(vector):
    min_diff = float('inf')
    split_index = -1

    left_sum = 0
    right_sum = sum(vector)

    for i in range(len(vector)):
        if left_sum <= right_sum:
            diff = abs(left_sum - right_sum)
            if diff < min_diff:
                min_diff = diff
                split_index = i
            left_sum += vector[i]
        else:
            right_sum -= vector[i]

    return vector[:split_index + 1], vector[split_index + 1:]