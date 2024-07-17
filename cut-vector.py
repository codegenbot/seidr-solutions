def cut_vector(vector):
    if len(vector) == 1:
        return [vector], []
    min_diff = float("inf")
    left_subvec = None
    right_subvec = None
    for i in range(1, len(vector)):
        diff = abs(sum(vector[:i]) - sum(vector[i:]))
        if diff < min_diff:
            min_diff = diff
            left_subvec = vector[:i]
            right_subvec = vector[i:]
    return [left_subvec], [right_subvec]