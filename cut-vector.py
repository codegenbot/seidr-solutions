def cut_vector(vector):
    left_sum = 0
    for i, x in enumerate(vector):
        left_sum += x
        if left_sum >= sum(vector) // 2:
            return [vector[:i+1], vector[i:]]
    else:
        min_diff = float('inf')
        for i in range(1, len(vector)):
            diff = abs(sum(vector[:i]) - sum(vector[i:]))
            if diff < min_diff:
                min_index = i
                min_diff = diff
        return [vector[:min_index+1], vector[min_index:]]