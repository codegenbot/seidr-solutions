def cut_vector(vector):
    min_diff = math.inf
    for i in range(1, len(vector)):
        diff = abs(vector[i] - vector[i-1])
        if diff < min_diff:
            min_diff = diff
            cut_index = i - 1
    return vector[:cut_index], vector[cut_index:]