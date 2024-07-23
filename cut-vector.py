def cut_vector(vector):
    min_diff = float("inf")
    split_index = -1
    
    for i in range(1, len(vector)-1):
        diff = abs(vector[i] - vector[i+1])
        
        if (diff < min_diff) and diff != 0:
            min_diff = diff
            split_index = i
    
    return vector[:split_index+1], vector[split_index:]