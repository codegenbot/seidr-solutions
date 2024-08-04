def cut_vector(vector):
    left_sum = sum(vector[:i+1]) for i in range(len(vector))
    min_diff = min(abs(left_sum - sum(vector[i:])) for i in range(len(vector)))
    min_index = [i for i, diff in enumerate(abs(left_sum - sum(vector[i:])) for i in range(len(vector))) if diff == min_diff][0]
    return vector[:min_index+1], vector[min_index:]