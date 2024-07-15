def cut_vector(vector):
    min_diff = float("inf")
    split_index = 0
    for i in range(1, len(vector)):
        if diff <= min_diff and i != 0 and i != len(vector) - 1:
            min_diff = diff
            split_index = i
    return vector[:split_index], vector[split_index:]