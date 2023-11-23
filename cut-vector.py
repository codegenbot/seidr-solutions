def cut_vector(vector):
    total_sum = sum(vector)
    min_diff = float('inf')
    left_index = right_index = -1

    current_sum = 0
    for i, num in enumerate(vector):
        current_sum += num
        diff = abs((total_sum - current_sum) - current_sum)

        if diff < min_diff:
            min_diff = diff
            left_index = i
            right_index = i + 1
        elif diff < min_diff:
            right_index = i + 1

    return tuple(vector[:left_index+1]), tuple(vector[right_index:])