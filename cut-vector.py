def cut_vector(vector):
    left_sum = 0
    for i in range(len(vector)):
        right_sum = sum(vector[i:])
        
        if left_sum == right_sum:
            return vector[:i+1], vector[i+1:]
        
        left_sum += vector[i]
    
    return None