```
def cut_vector(vector):
    min_diff = float('inf')
    cut_index = 0
    for i in range(1, len(vector)):
        left_sum = sum(vector[:i+1])
        right_sum = sum(vector[i:])
        
        if left_sum == right_sum:
            return tuple(vector[:i+1]), tuple(vector[i:])
        elif abs(left_sum - right_sum) < min_diff:
            min_diff = abs(left_sum - right_sum)
            cut_index = i
            
    if len(vector) % 2 != 0:
        middle = vector[len(vector)//2]
        left_sum = sum(vector[:len(vector)//2+1])
        right_sum = sum(vector[len(vector)//2:])
        
        if left_sum == right_sum:
            return tuple(vector[:len(vector)//2+1]), tuple(vector[len(vector)//2:])
        elif abs(left_sum - right_sum) < min_diff:
            min_diff = abs(left_sum - right_sum)
            cut_index = len(vector)//2
            
    return tuple(vector[:cut_index]), tuple(vector[cut_index:])