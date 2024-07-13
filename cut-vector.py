def cut_vector(vector):
    min_diff = float('inf')
    left_sum = 0
    right_sum = sum(vector)
    
    for i in range(1, len(vector)):
        left_sum += vector[i-1]
        right_sum -= vector[i]
        
        diff = abs(left_sum - right_sum)
        
        if diff < min_diff:
            min_diff = diff
    return [vector[:min_diff.index(min(min_diff)) + 1], vector[min_diff.index(min(min_diff)) + 1:]]