def cut_vector(vector):
    sorted_vector = sorted(vector)
    min_diff = float('inf')
    split_index = 0
    
    for i in range(1, len(sorted_vector)):
        left_sum = sum(sorted_vector[:i])
        right_sum = sum(sorted_vector[i:])
        
        if left_sum == right_sum or abs(left_sum - right_sum) <= min_diff:
            min_diff = abs(left_sum - right_sum)
            split_index = i
    
    return (sorted_vector[:split_index], sorted_vector[split_index:])