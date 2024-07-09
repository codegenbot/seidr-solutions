def cut_vector(vector):
    if len(vector) == 1: return [vector]
    total_sum = sum(vector)
    left_sum = 0
    min_diff = float('inf')
    min_index = -1
    for i in range(len(vector)):
        right_sum = total_sum - left_sum
        diff = abs(left_sum - right_sum)
        if diff < min_diff:
            min_diff = diff
            min_index = i
        left_sum += vector[i]
    return [vector[:min_index+1], vector[min_index+1:]]