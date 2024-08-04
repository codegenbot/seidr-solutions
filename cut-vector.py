def cut_vector(vector):
    if len(vector) == 1:
        return vector, []

    left_sum = sum(vector[:i+1]) for i in range(len(vector)))
    min_diff = min(abs(left_sum[i] - sum(vector[i:])) for i in range(len(vector)))

    cut_index = [i for i in range(len(vector)) if abs(left_sum[i] - sum(vector[i:])) == min_diff][0]
    
    return vector[:cut_index+1], vector[cut_index:]