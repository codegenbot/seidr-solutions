```
def cut_vector(vector):
    vector.sort()
    
    left_sum = 0
    min_diff = float("inf")
    split_index = 0
    
    for i in range(1, len(vector)):
        left_sum += vector[i-1]
        right_sum = sum(vector[i:])
        
        if abs(left_sum - right_sum) < min_diff:
            min_diff = abs(left_sum - right_sum)
            split_index = i-1
    
    return [vector[:split_index+1]], sum(vector[:split_index+1]), [vector[split_index+1:]]