```Python
def cut_vector(vector):
    min_diff = float('inf')
    split_index = 0
    
    left_sum = vector[0]
    
    for i in range(1, len(vector)):
        right_sum = sum(vector[:i+1])
        
        diff = abs(left_sum - (right_sum - left_sum))
        if diff < min_diff:
            min_diff = diff
            split_index = i
        
        left_sum += vector[i]
    
    return vector[:split_index], vector[split_index:]