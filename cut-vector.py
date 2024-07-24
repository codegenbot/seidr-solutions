def cut_vector(vector):
    left_sum = 0
    min_diff = float("inf")
    split_index = -1

    for i in range(len(vector)):
        right_sum = sum(vector[:i])

        if left_sum == right_sum:
            return [vector[:i+1], vector[i+1:]]
        
        diff = abs(left_sum - right_sum)

        left_sum += vector[i]
        if diff < min_diff:
            min_diff = diff
            split_index = i

    if split_index != -1:
        return [vector[:split_index+1], vector[split_index+1:]]
    
    return [vector, []]