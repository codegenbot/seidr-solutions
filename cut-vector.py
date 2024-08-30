```
def cut_vector(vector):
    left_sum = sum(vector[:i]) for i in range(len(vector))
    min_diff = min(abs(left_sum - sum(vector[i:])) for i in range(len(vector)))
    
    result_left = vector[:np.argmin([abs(left_sum - sum(vector[i:])) for i in range(len(vector))])]
    result_right = vector[np.argmin([abs(left_sum - sum(vector[i:])) for i in range(len(vector))):]]

    return result_left, result_right