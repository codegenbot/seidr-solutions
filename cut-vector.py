def cut_vector(vector):
    total_sum = sum(vector)
    current_sum = 0
    min_difference = float('inf')
    min_index = 0
    
    for i, num in enumerate(vector):
        current_sum += num
        difference = abs(total_sum - 2 * current_sum)
        
        if difference < min_difference:
            min_difference = difference
            min_index = i
    
    return vector[:min_index+1], vector[min_index+1:]