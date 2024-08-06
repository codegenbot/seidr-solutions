Here is the Python solution:

def cut_vector(vector):
    min_diff = float('inf')
    split_idx = -1
    
    for i in range(1, len(vector)):
        left_sum = sum(vector[:i])
        right_sum = sum(vector[i:])
        
        if left_sum == right_sum:
            return vector[:i], vector[i:]
        else:
            diff = abs(left_sum - right_sum)
            if diff < min_diff:
                min_diff = diff
                split_idx = i
    
    left_sum = sum(vector[:split_idx])
    right_sum = sum(vector[split_idx:])
    
    if left_sum == right_sum:
        return vector[:split_idx], vector[split_idx:]
    else:
        return vector[:split_idx], vector[split_idx:]