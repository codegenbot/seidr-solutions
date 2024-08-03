```
def cut_vector(vector):
    if len(vector) == 1:
        return vector[0], [vector[0]], []
    min_diff = float('inf')
    cut_index = -1
    for i in range(1, len(vector)):
        diff = abs(sum(vector[:i]) - sum(vector[i:]))
        if diff < min_diff:
            min_diff = diff
            cut_index = i
    left_half = vector[:cut_index+1]
    right_half = vector[cut_index:]
    return left_half, right_half, [0] * (len(left_half) - len(right_half))