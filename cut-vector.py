def cut_vector(vector):
    min_diff = float('inf')
    split_idx = -1
    
    for i in range(len(vector)):
        left_sum = sum(vector[:i+1])
        right_sum = sum(vector[i:])
        
        diff = abs(left_sum - right_sum)
        
        if diff < min_diff:
            min_diff = diff
            split_idx = i
    
    return [vector[:split_idx], vector[split_idx:]]