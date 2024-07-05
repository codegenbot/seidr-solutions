def cut_vector(vector):
    total_sum = sum(vector)
    left_sum = 0
    
    min_diff = float("inf")
    split_index = 0

    for i in range(len(vector)):
        right_sum = total_sum - left_sum
        
        if (left_sum == right_sum or abs(left_sum - right_sum) < min_diff):
            min_diff = abs(left_sum - right_sum)
            split_index = i
        
        left_sum += vector[i]

    return vector[:split_index], vector[split_index:], min_diff