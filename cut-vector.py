def cut_vector(vector):
    if len(vector) == 1:
        return [vector], [0]
    
    left_sum = sum(vector[:i+1]) for i in range(len(vector))
    min_diff = min(abs(left_sum - sum(vector[i:])) for i in range(len(vector)))
    
    for i, left_sum in enumerate(left_sum):
        if abs(left_sum - sum(vector[i:])) == min_diff:
            return vector[:i], vector[i:]