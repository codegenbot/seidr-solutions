def cut_vector(vector):
    if len(vector) <= 1:
        return ([vector], [])
    
    left_sum = sum(vector[:1])
    right_sum = sum(vector[1:])

    min_diff = abs(left_sum - right_sum)
    split_index = 0

    for i in range(1, len(vector)):
        new_left_sum = sum(vector[:i+1])
        new_right_sum = sum(vector[i:])

        if abs(new_left_sum - new_right_sum) < min_diff:
            min_diff = abs(new_left_sum - new_right_sum)
            split_index = i

    return ([vector[:split_index]], [vector[split_index:]])