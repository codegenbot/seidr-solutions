def cut_vector(vector):
    min_diff = float('inf')
    split_index = 0
    
    for i in range(1, len(vector)):
        if left_sum == right_sum:
            return vector[:i], vector[i:]
        
        diff = abs(left_sum - right_sum)
        if diff < min_diff:
            min_diff = diff
            split_index = i
    
    return vector[:split_index], vector[split_index:]