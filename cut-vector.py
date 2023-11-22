import numpy as np

def cut_vector(vector):
    vector = np.array(vector)
    min_diff = np.inf
    min_index = -1
    
    for i in range(1, len(vector)):
        left_sum = np.sum(vector[:i])
        right_sum = np.sum(vector[i:])
        diff = abs(left_sum - right_sum)
        
        if diff < min_diff:
            min_diff = diff
            min_index = i
    
    return list(vector[:min_index]), list(vector[min_index:])