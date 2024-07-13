def cut_vector(vector):
    min_diff = float("inf")
    split_index = 0
    
    for i in range(1, len(vector)//2 + 1): 
        left_sum = sum(vector[:i+1])
        
        if abs(left_sum - sum(vector[i:])) < min_diff:
            min_diff = abs(left_sum - sum(vector[i:]))
            split_index = i

    return str(tuple(vector[:split_index])), str(tuple(vector[split_index:]))