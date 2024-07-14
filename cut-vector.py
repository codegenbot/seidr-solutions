def cut_vector(vector):
    total = sum(vector)
    left_sum = 0
    min_diff = float('inf')
    cut_index = 0
    
    for i in range(len(vector)):
        right_sum = total - left_sum
        
        diff = abs(left_sum - right_sum)
        if diff < min_diff:
            min_diff = diff
            cut_index = i
            
        left_sum += vector[i]
        
    return tuple(vector[:cut_index+1]), tuple(vector[cut_index+1:])