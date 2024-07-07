def cut_vector(vector):
    total_sum = sum(vector)
    
    min_diff = float("inf")
    split_idx = 0
    
    for i in range(len(vector)):
        left_sum = sum(vector[:i+1])
        
        if left_sum == (total_sum - left_sum):
            return vector[:i+1], vector[i:]
        
        diff = abs(left_sum - (total_sum - left_sum))
        
        if diff < min_diff:
            min_diff = diff
            split_idx = i
    
    return vector[:split_idx+1], vector[split_idx:]