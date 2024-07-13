```Python
def cut_vector(vector):
    min_diff = float('inf')
    left_sum = 0
    for i, num in enumerate(vector):
        left_sum += num
        
        right_sum = sum(vector[i+1:])
        
        if abs(left_sum - right_sum) < min_diff:
            min_diff = abs(left_sum - right_sum)
            left_subvector = tuple(vector[:i+1])
            right_subvector = tuple(vector[i+1:])
            
    return left_subvector, right_subvector