def cut_vector(vector):
    left_sum = 0
    min_diff = float('inf')
    for i in range(1, len(vector)):
        left_sum += vector[i-1]
        right_sum = sum(vector[i:])
        
        if abs(left_sum - right_sum) < min_diff:
            min_diff = abs(left_sum - right_sum)
            cut_index = i

    return vector[:cut_index], vector[cut_index:]