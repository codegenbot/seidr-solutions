def cut_vector(vector):
    if len(vector) == 1:
        return [vector], [0]

    left_sum = sum(vector[:i+1]) for i in range(len(vector))]
    min_diff = min(abs(sum(vector[:i+1]) - sum(vector[i:]))) for i in range(len(vector))])
    split_idx = left_sum.index(min(left_sum)) if min(left_sum) else 0

    return [vector[:split_idx+1]], [vector[split_idx:]]