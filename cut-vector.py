def cut_vector(vector):
    n = len(vector)
    total_sum = sum(vector)
    left_sum = 0
    right_sum = total_sum
    
    for i in range(n):
        left_sum += vector[i]
        right_sum -= vector[i]
        
        if abs(left_sum - right_sum) < abs(left_sum + right_sum - total_sum):
            return vector[:i+1], vector[i+1:]
    
    return vector[:i+2], vector[i+2:]