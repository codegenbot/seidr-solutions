def cut_vector(vector):
    min_diff = float("inf")
    for i in range(len(vector)):
        for j in range(i + 1, len(vector)):
            diff = abs(vector[i] - vector[j])
            if diff < min_diff:
                min_diff = diff
                split_index = (i, j)
    
    return (
        vector[:split_index[0] + 1],
        vector[split_index[0]:]
    )