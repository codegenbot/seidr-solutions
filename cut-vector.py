def cut_vector(vector):
    total_sum = sum(vector)
    min_diff = abs(total_sum)
    left_index = right_index = 0

    current_sum = 0
    for i, num in enumerate(vector):
        current_sum += num
        diff = abs((total_sum - current_sum) - current_sum)

        if diff < min_diff:
            min_diff = diff
            left_index = i
        elif diff == 0:
            left_index = i + 1

    right_index = left_index + 1
    return vector[:left_index], vector[right_index:]