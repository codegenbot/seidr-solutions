Here is the completed Python code for the "cut-vector" problem:

def cut_vector(vector):
    min_diff = float('inf')
    split_idx = -1
    left_sum = 0
    right_sum = sum(vector)
    
    for i in range(len(vector)):
        right_sum -= vector[i]
        if abs(left_sum - right_sum) < min_diff:
            min_diff = abs(left_sum - right_sum)
            split_idx = i
    
    return [vector[:split_idx+1], vector[split_idx:]]