def cut_vector(vector):
    if len(vector) <= 1:
        return [vector], []
    
    if sum(vector) % 2 == 0:
        return [vector], []

    for i in range(1, len(vector)):
        left_sum = sum(vector[:i])
        right_sum = sum(vector[i:])

        diff = abs(left_sum - right_sum)
        if diff < min_diff:
            min_diff = diff
            split_index = i

    if min_diff == 0:
        return [vector[:1]], [vector[1:]]
    elif diff == sum(vector[:1]) - sum(vector[1:]):
        return [vector], []

    return [vector[:split_index]], [vector[split_index:]]