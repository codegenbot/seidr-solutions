def cut_vector(vector):
    min_diff = float("inf")
    split_index = -1
    for i in range(1, len(vector)):
        if abs(vector[i] - vector[0]) < min_diff:
            min_diff = abs(vector[i] - vector[0])
            split_index = i

    return vector[:split_index+1], vector[split_index:]