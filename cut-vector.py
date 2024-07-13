```
def cut_vector(vector):
    if sum(vector[:1]) == total_sum - sum(vector[1:]): 
        return [vector[:1], vector[1:]]
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