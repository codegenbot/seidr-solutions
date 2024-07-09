```
def cut_vector(vector):
    min_diff = float('inf')
    result = None
    
    for i in range(1, len(vector)):
        diff = abs(sum(vector[:i]) - sum(vector[i:]))
        if diff < min_diff:
            min_diff = diff
            result = (vector[:i], vector[i:])
    
    return *result