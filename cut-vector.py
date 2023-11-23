def cut_vector(vector):
    total_sum = sum(vector)
    min_diff = abs(total_sum - 2 * vector[0])
    left_index = right_index = 0

    current_sum = 0
    for i, num in enumerate(vector):
        current_sum += num
        diff = abs((total_sum - current_sum) - current_sum)

        if diff < min_diff or (diff == min_diff and i < left_index):
            min_diff = diff
            left_index = i
            right_index = i
        elif diff == min_diff and i == left_index:
            right_index = i

    return vector[:left_index + 1], vector[right_index:]