def cut_vector(vector):
    left_sum = sum(vector[:i+1]) for i in range(len(vector))
    min_diff = min(abs(sum(vector[:i+1]) - sum(vector[i:])) for i in range(len(vector)))
    idx = [i for i, diff in enumerate([abs(sum(vector[:i+1]) - sum(vector[i:])) for i in range(len(vector))]) if diff == min_diff][0]
    return vector[:idx], vector[idx:]