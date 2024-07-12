```
def cut_vector(vector):
    if len(vector) <= 1:
        return (vector,)

    min_diff = float("inf")
    cut_index = 0
    for i in range(1, len(vector)):
        diff = abs(sum(vector[:i]) - sum(vector[i:]))
        if diff < min_diff and diff > 0:
            min_diff = diff
            cut_index = i

    return vector[:cut_index], vector[cut_index:]