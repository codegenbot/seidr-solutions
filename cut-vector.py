```
def cut_vector(vector):
    vector.sort()
    
    left_sum = sum(vector[:1])
    right_sum = sum(vector[1:])
    
    if left_sum == right_sum:
        return [vector[:1]], sum(vector[:1]), [vector[1:]]
    
    min_diff = float("inf")
    split_index = 0
    
    for i in range(1, len(vector)):
        left_sum = sum(vector[:i])
        right_sum = sum(vector[i:])
        
        if left_sum == right_sum or abs(left_sum - right_sum) < min_diff:
            min_diff = abs(left_sum - right_sum)
            split_index = i
    
    return vector[:split_index], sum(vector[:split_index]), vector[split_index:]