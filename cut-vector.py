def cut_vector(vector):
    min_diff = float('inf')
    cut_index = 0
    for i in range(len(vector)):
        left_sum = sum(vector[:i+1])
        right_sum = sum(vector[i+1:])
        
        if left_sum == right_sum:
            return tuple(vector[:i+1]), tuple(vector[i+1:])
        
        diff = abs(left_sum - right_sum)
        if diff < min_diff and (left_sum != 0 or right_sum != 0):
            min_diff = diff
            cut_index = i
            
    return tuple(vector[:cut_index+1]), tuple(vector[cut_index+1:])