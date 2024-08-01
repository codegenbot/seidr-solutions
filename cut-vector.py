def cut_vector(vector):
    min_diff = float('inf')
    cut_index = -1
    left_sum = sum(vector[:i+1]) for i in range(len(vector)))
    
    for i in range(1, len(vector)):
        right_sum = sum(vector[i:])
        diff = abs(left_sum - right_sum)
        if diff < min_diff:
            min_diff = diff
            cut_index = i
            
    return vector[:cut_index+1], vector[cut_index:]