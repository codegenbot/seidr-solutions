def cut_vector(vector):
    if len(vector) == 1: return [vector]
    total_sum = sum(vector)
    min_diff = float('inf')
    prev_left_sum = 0
    right_sum = total_sum
    for i in range(len(vector)):
        left_sum = prev_left_sum + vector[i]
        right_sum -= vector[i]
        diff = abs(left_sum - right_sum)
        if diff < min_diff:
            min_diff = diff
            cut_index = i
        prev_left_sum += vector[i]
    return [vector[:cut_index], vector[cut_index:]]