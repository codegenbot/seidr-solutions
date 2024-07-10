def cut_vector(vector):
    if len(vector) == 1:
        return [vector], []

    min_diff = float('inf')
    for i in range(len(vector)):
        left_sum = sum(vector[:i])
        right_sum = sum(vector[i:])
        if abs(left_sum - right_sum) < min_diff:
            min_diff = abs(left_sum - right_sum)
            cut_index = i

    return [vector[:cut_index]], [vector[cut_index:]]