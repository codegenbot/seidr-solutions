def cut_vector(vector):
    if len(vector) == 1: return [vector]
    total_sum = sum(vector)
    min_diff = float('inf')
    prev_left_sum = 0
    for i in range(len(vector)):
        left_sum = sum(vector[:i+1])
        right_sum = total_sum - left_sum
        diff = abs(left_sum - right_sum)
        if diff < min_diff:
            min_diff = diff
            cut_index = i
    return [vector[:cut_index], vector[cut_index:]]