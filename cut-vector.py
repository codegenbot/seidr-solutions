```
def cut_vector(vector):
    min_diff = min(min(vector), abs(sum(vector) // 2 - sum(vector)))
    split_idx = -1
    
    for i in range(1, len(vector)):
        left_sum = sum(vector[:i])
        right_sum = sum(vector[i:])
        
        diff = abs(left_sum - right_sum)
        
        if diff == min_diff or left_sum != right_sum:
            min_diff = diff
            split_idx = i
    
    return [vector[:split_idx], vector[split_idx:]]