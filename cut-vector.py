Here is the solution:

def cut_vector(v):
    if len(v) == 1:
        return v[0], v
    
    min_diff = float('inf')
    split_index = -1
    for i in range(1, len(v)):
        left_sum = sum(v[:i])
        right_sum = sum(v[i:])
        
        diff = abs(left_sum - right_sum)
        if diff < min_diff:
            min_diff = diff
            split_index = i
    
    return v[:split_index], v[split_index:]