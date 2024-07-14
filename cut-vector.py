def cut_vector(vector):
    min_diff = float('inf')
    cut_index = 0
    for i in range(1, len(vector)):
        if sum(vector[:i]) == sum(vector[i:]):
            return tuple(vector[:i]), tuple(vector[i:])
        left_sum = sum(vector[:i])
        right_sum = sum(vector[i:])
        
        diff = abs(left_sum - right_sum)
        if diff < min_diff:
            min_diff = diff
            cut_index = i
            
    return tuple(vector[:cut_index]), tuple(vector[cut_index:])