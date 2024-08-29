```
def cut_vector(vector):
    if len(vector) == 1:
        return vector, [vector[0]]
    left = right = 0
    min_diff = float('inf')
    split_index = -1
    for i in range(1, len(vector)):
        diff = abs(sum(vector[:i]) - sum(vector[i:]))
        if diff < min_diff:
            min_diff = diff
            split_index = i
    left_subvector = vector[:split_index]
    right_subvector = vector[split_index:]
    return left_subvector, right_subvector