```
def cut_vector(vector):
    if len(vector) == 1: 
        return [vector]
    min_diff = float('inf')
    cut_index = -1  
    for i in range(len(vector)):
        left_sum = sum(vector[:i+1])
        right_sum = sum(vector[i:])
        diff = abs(left_sum - right_sum)
        if diff < min_diff:
            min_diff = diff
            cut_index = i
    return [vector[:cut_index], vector[cut_index:]]