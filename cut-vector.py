Here is the Python code for the problem:

def cut_vector(vector):
    n = len(vector)
    min_diff = float('inf')
    split_idx = -1
    left_sum = 0
    
    for i in range(n-1):
        right_sum = sum(vector[i+1:])
        diff = abs(left_sum - right_sum)
        
        if diff <= min_diff:
            min_diff = diff
            split_idx = i
            
        left_sum += vector[i]
    
    return vector[:split_idx+1], vector[split_idx+1:]