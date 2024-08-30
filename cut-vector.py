```
def cut_vector(vector):
    min_diff = float("inf")
    cut_index = 0

    for i in range(len(vector)):
        diff = abs(sum(vector[:i+1]) - sum(vector[i:]))

        if diff < min_diff:
            min_diff = diff
            cut_index = i

    return str.join(",", map(str, vector[:cut_index+1])), str.join(",", map(str, vector[cut_index+1:]))