Here is the completed Python code:

def cut_vector(vector):
    left_sum = 0
    min_diff = float('inf')
    split_index = -1
    
    for i in range(len(vector)):
        right_sum = sum(vector[i:])
        
        if abs(left_sum - right_sum) < min_diff:
            min_diff = abs(left_sum - right_sum)
            split_index = i
            
        left_sum += vector[i]
    
    return vector[:split_index+1], vector[split_index+1:]