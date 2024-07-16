```
def cut_vector(vector):
    min_diff = float('inf')
    result = None
    left_sum = 0
    
    for i in range(len(vector)):
        left_sum += vector[i]
        right_sum = sum(vector) - left_sum
        
        diff = abs(left_sum - right_sum)
        
        if diff < min_diff:
            min_diff = diff
            result = (vector[:i+1], vector[i:])
    
    return result