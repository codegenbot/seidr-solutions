def cut_vector(vector):
    n = len(vector)
    if n == 1:
        return vector[0], 0
    
    min_diff = math.inf
    min_index = -1
    
    for i in range(1, n):
        diff = abs(sum(vector[:i]) - sum(vector[i:]))
        if diff < min_diff:
            min_diff = diff
            min_index = i
    
    return vector[:min_index], vector[min_index:]