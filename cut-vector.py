def cut_vector(vector):
    vector.sort()
    min_diff = float("inf")
    for i in range(len(vector) - 1):
        diff = vector[i + 1] - vector[i]
        if diff < min_diff:
            min_diff = diff
            split_index = (i, i + 1)
    
    return (
        vector[:split_index[0] + 1],
        vector[split_index[0]:]
    )