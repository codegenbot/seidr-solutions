def cut_vector(vector):
    min_diff = float('inf')
    for i in range(1, len(vector)):
        left_sum = sum(vector[:i])
        right_sum = sum(vector[i:])
        
        if abs(left_sum - right_sum) < min_diff:
            min_diff = abs(left_sum - right_sum)
            cut_index = i
        elif (left_sum >= right_sum and left_sum != right_sum):
            return vector[:i], vector[i:]
        elif (right_sum > left_sum and right_sum != left_sum): 
            return vector[:i+1], vector[i:]
    if min_diff == float('inf'):
        return vector, []
    
    return vector[:cut_index], vector[cut_index:]