def cut_vector(vector):
    if len(vector) <= 1:
        return vector, []

    min_diff = float('inf')
    left_sum, right_sum = sum(vector[:1]), sum(vector[1:])
    
    for i in range(1, len(vector)):
        left_sum, right_sum = left_sum + vector[i-1], right_sum - vector[i]
        
        if (left_sum == right_sum) or (abs(left_sum - right_sum) < min_diff):
            min_left_index = i
            min_diff = abs(left_sum - right_sum)
            
    return vector[:min_left_index+1], vector[min_left_index:]