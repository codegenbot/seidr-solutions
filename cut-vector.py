```
def cut_vector(vector):
    if len(vector) == 2:
        return tuple(vector), tuple([])
    else:
        min_diff = float('inf')
        cut_index = 0
        for i in range(1, len(vector)):
            left_sum = sum(vector[:i])
            right_sum = sum(vector[i:])
            
            if left_sum == right_sum:
                return tuple(vector[:i]), tuple(vector[i:])
            elif abs(left_sum - right_sum) < min_diff:
                min_diff = abs(left_sum - right_sum)
                cut_index = i
                
        return tuple(vector[:cut_index]), tuple(vector[cut_index:])