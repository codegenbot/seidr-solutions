```
def cut_vector(vector):
    total_sum = sum(vector)
    
    min_diff = float("inf")
    split_index = -1

    left_sum = 0
    right_sum = total_sum
    
    for i in range(len(vector)):
        if left_sum != right_sum:
            diff = abs(left_sum - right_sum)
            if diff < min_diff:
                min_diff = diff
                split_index = i
                
        if left_sum <= right_sum:
            left_sum += vector[i]
        else:
            right_sum -= vector[i]

    return vector[:split_index], vector[split_index:]