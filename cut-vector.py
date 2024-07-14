def cut_vector(vector):
    min_diff = float('inf')
    cut_index = 0
    total_sum = sum(vector)
    
    for i in range(len(vector)):
        left_sum = total_sum - sum(vector[i+1:])
        
        diff = abs(left_sum - sum(vector[:i+1]))
        if (left_sum == sum(vector[:i+1])) or diff < min_diff:
            min_diff = diff
            cut_index = i
            
    return tuple(vector[:cut_index+1]), tuple(vector[cut_index+1:])