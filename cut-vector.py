Here is the completed code:

def cut_vector(input_vector):
    min_diff = float('inf')
    split_index = 0
    
    for i in range(1, len(input_vector)):
        left_sum = sum(input_vector[:i])
        right_sum = sum(input_vector[i:])
        
        if left_sum == right_sum:
            return input_vector[:i], input_vector[i:]
        elif abs(left_sum - right_sum) < min_diff:
            min_diff = abs(left_sum - right_sum)
            split_index = i
            
    return input_vector[:split_index], input_vector[split_index:]