def cut_vector(vector):
    if len(vector) == 1:
        return [vector], [0]

    left_sum = sum(vector[:i+1]) for i in range(len(vector))]
    min_diff = min(abs(sum(vector[:i+1]) - sum(vector[i:])), 0)
    cut_index = next(i for i, v in enumerate(left_sum) if abs(v - min_diff) < min_diff)

    return vector[:cut_index+1], vector[cut_index:]