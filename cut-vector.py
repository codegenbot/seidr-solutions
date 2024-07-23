```
def cut_vector(vector):
    left = 0
    min_diff = float("inf")
    split_index = -1
    for i in range(1, len(vector)):
        diff = abs(sum(vector[:i]) / i - sum(vector[i:]) / (len(vector) - i))
        if diff < min_diff:
            min_diff = diff
            split_index = i
    return vector[:split_index], vector[split_index:]