```
def cut_vector(vector):
    n = len(vector)
    left_sum = 0
    right_sum = sum(vector)
    
    min_diff = float("inf")
    split_index = 0
    
    for i in range(n-1):
        right_sum -= vector[i]
        left_sum += vector[i]
        
        if left_sum == right_sum:
            return vector[:i+1], vector[i+1:]
        
        diff = abs(left_sum - right_sum)
        
        if diff < min_diff:
            min_diff = diff
            split_index = i + 1
    
    if left_sum <= right_sum:
        return vector[:split_index], vector[split_index:]
    else:
        return vector[:split_index-1], [vector[split_index-1]], [vector[split_index:]]