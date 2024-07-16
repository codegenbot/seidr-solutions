def cut_vector(vector):
    min_diff = float('inf')
    if len(vector) == 1:
        return vector, []

    left_sum = sum(vector[:1])
    right_sum = sum(vector[1:])

    if abs(left_sum - right_sum) < min_diff:
        min_diff = abs(left_sum - right_sum)
        cut_index = 0

    for i in range(1, len(vector)):
        left_sum = sum(vector[:i])
        right_sum = sum(vector[i:])
        
        if abs(left_sum - right_sum) < min_diff:
            min_diff = abs(left_sum - right_sum)
            cut_index = i

    return vector[:cut_index+1], vector[cut_index:]