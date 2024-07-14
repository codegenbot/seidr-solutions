```Python
def cut_vector(vector):
    min_diff = float('inf')
    cut_index = 0
    total_sum = sum(vector)
    
    for i in range(len(vector)):
        left_sum = sum(vector[:i+1])
        
        right_sum = total_sum - left_sum
        
        diff = abs(left_sum - right_sum)
        if diff < min_diff:
            min_diff = diff
            cut_index = i
            
    return tuple(vector[:cut_index]), tuple(vector[cut_index:])