Here is the Python solution:

def cut_vector(vector):
    min_diff = float('inf')
    split_point = 0
    
    for i in range(1, len(vector)):
        diff = abs(np.mean(vector[:i]) - np.mean(vector[i:]))
        
        if diff < min_diff:
            min_diff = diff
            split_point = i
            
    return vector[:split_point], vector[split_point:]