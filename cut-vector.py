def cut_vector(vector):
    total = sum(vector)
    left_sum = 0
    for i in range(len(vector)):
        right_sum = total - left_sum
        if abs(left_sum - right_sum) <= abs(left_sum - right_sum - (vector[i] - vector[0])):
            return [vector[:i+1], vector[i:]]
        left_sum += vector[i]
    return [vector, []]