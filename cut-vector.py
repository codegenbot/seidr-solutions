def cut_vector(vector):
    left_sum = sum(vector[:i]) for i in range(len(vector))
    min_diff = min(abs(left_sum - sum(vector[i:]))
    best_split = [i for i in range(len(vector)) if abs(left_sum - sum(vector[i:])) == min_diff][0]
    return vector[:best_split], vector[best_split:]