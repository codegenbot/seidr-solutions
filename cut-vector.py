def cut_vector(vector):
    if sum(vector) % 2 == 0:
        return [vector[:len(vector)//2], vector[len(vector)//2:]]
    
    left_sum = 0
    right_sum = sum(vector)
    min_diff = float("inf")
    split_index = 0
    
    for i in range(len(vector)):
        right_sum -= vector[i]
        if abs(left_sum - right_sum) < min_diff or not min_diff:
            min_diff = abs(left_sum - right_sum)
            split_index = i
            
    return vector[:split_index], vector[split_index:]