```
def cut_vector(vector):
    min_diff = float('inf')
    split_index = 0
    
    for i in range(1, len(vector)):
        left_sum = sum(vector[:i+1])
        right_sum = sum(vector[i:])
        
        if abs(left_sum - right_sum) <= min_diff:
            min_diff = abs(left_sum - right_sum)
            split_index = i
    
    # Check the first and last positions
    if vector[0] == vector[-1]:
        return (vector[:1], vector[1:])
    else:
        return (vector[:split_index], vector[split_index:])