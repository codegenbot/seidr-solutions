def cut_vector(vector):
    total_sum = sum(vector)
    left_sum = 0
    min_diff = float('inf')
    for i, num in enumerate(vector):
        right_sum = total_sum - left_sum - num
        diff = abs(left_sum - right_sum)
        
        if diff <= min_diff:
            min_diff = diff
            cut_index = i

    return vector[:cut_index], vector[cut_index:]