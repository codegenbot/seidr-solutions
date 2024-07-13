def cut_vector(vector):
    vector.sort()
    
    min_diff = float("inf")
    split_index = 0
    
    for i in range(1, len(vector)):
        if abs(sum(vector[:i]) - sum(vector[i:])) < min_diff:
            min_diff = abs(sum(vector[:i]) - sum(vector[i:]))
            split_index = i
    
    return vector[:split_index], vector[split_index:]