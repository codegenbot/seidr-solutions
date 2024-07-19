```
def cut_vector(vector):
    min_diff = float("inf")
    split_index = -1
    for i in range(1, len(vector)+1):  
        diff = abs(sum(vector[:i]) - sum(vector[i:]))
        if diff < min_diff:
            min_diff = diff
            split_index = i
        elif sum(vector[:i]) == sum(vector[i:]):
            return vector[:i], vector[i:]

    return vector[:split_index], vector[split_index:]