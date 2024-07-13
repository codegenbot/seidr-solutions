```
def cut_vector(vector):
    if len(vector) == 1:
        return [vector]
    total_sum = sum(vector)
    min_diff = float('inf')
    split_index = -1  
    for i in range(len(vector)):
        left_sum = total_sum - sum(vector[i:])
        right_sum = sum(vector[:i])
        diff = abs(left_sum - right_sum)
        if diff < min_diff:
            min_diff = diff
            split_index = i
    return [vector[:split_index], vector[split_index:]]