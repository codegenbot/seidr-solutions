def cut_vector(vector):
    if len(vector) == 1:
        return vector, []

    min_diff = float("inf")
    split_index = 0

    for i in range(1, len(vector)):
        left_max = max(vector[:i+1])
        right_min = min(vector[i:])
        
        if abs(left_max - right_min) < min_diff:
            min_diff = abs(left_max - right_min)
            split_index = i

    return vector[:split_index+1], vector[split_index:]