def cut_vector(vector):
    min_diff = math.inf
    for i in range(1, len(vector)):
        diff = abs(vector[i] - vector[i-1])
        if diff < min_diff:
            min_diff = diff
            cut_index = i
    
    for j in range(cut_index + 1, len(vector)):
        diff = abs(vector[j] - vector[j-1])
        if diff < min_diff:
            min_diff = diff
            cut_index = j
    
    return vector[:cut_index], vector[cut_index:]