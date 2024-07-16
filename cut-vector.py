def cut_vector(vector):
    min_diff = float('inf')
    left_sum, right_sum = 0, sum(vector)
    
    for i in range(len(vector)):
        left_sum += vector[i]
        right_sum -= vector[i]
        
        if abs(left_sum - right_sum) < min_diff:
            min_left_index = i
            min_diff = abs(left_sum - right_sum)
            
    return tuple(map(lambda x: list(x), [vector[:min_left_index+1]], [vector[min_left_index:]]))