def cut_vector(vector):
    if len(vector) <= 1:
        return vector, []

    left_sum = right_sum = total_sum = sum(vector)
    for i in range(1, len(vector)):
        right_sum -= vector[i-1]
        if abs(left_sum - right_sum) < min_diff or i == len(vector)-1:
            min_left_index, min_right_index = i-1, i
            min_diff = abs(left_sum - right_sum)
    return vector[:min_left_index], vector[min_right_index:]